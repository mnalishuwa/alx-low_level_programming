#include "main.h"

/**
 * main - program to print out ELF header
 * Description: Opens a valid ELF file and prints out the
 * contents of the header.
 *
 * @argc: int argument count
 * @argv: str array, argument vector
 *
 * Return: 0 success
 */
int main(int argc, char **argv)
{
	int fdes;
	char *err = "Not an ELF file - it has the wrong magic bytes at the start";

	ssize_t __attribute__((unused)) nread;
	void *elf_buf[32];
	char *os_abi, *ftype;

	if (argc != 2)
	{
		exit(98);
	}
	fdes = open(argv[1], O_RDONLY);
	if (fdes < 0)
	{
		close(fdes);
		exit(98);
	}

	nread = read(fdes, elf_buf, 32);
	close(fdes);

	if (is_elf(elf_buf) == 0)
	{
		write(STDERR_FILENO, err, 60);
		exit(98);
	}
	printf("ELF Header:\n");
	print_magic((unsigned char *)elf_buf);
	elf_class((unsigned char *)elf_buf);
	elf_endian((unsigned char *)elf_buf);
	print_version((unsigned char *)elf_buf);
	os_abi = check_osabi((unsigned char *)(elf_buf));
	printf("  %-35s%10s\n", "OS/ABI:", os_abi);
	print_abi_version((unsigned char *)(elf_buf));
	ftype = check_type(elf_buf);
	printf("  %-35s%10s\n", "Type:", ftype);
	_print_eentry((unsigned char *)elf_buf);

	return (0);
}

/**
 * _print_eentry - print entry addr
 * Description: print entry addr of ELF
 *
 * @ebuf: elf data
 *
 * Return: void
 */
void _print_eentry(unsigned char *ebuf)
{
	size_t e_entry_offset = 24, i = 0, addr_bytes = 4;
	size_t class_offset = 4, endian_offset = 5, sigfig = 0;
	unsigned char *e_entry = (unsigned char *)ebuf;

	printf("  %-35s0x", "Entry point address:");
	if (*(ebuf + class_offset) == 0x02) /* check if machine is ELF64 */
	{
		addr_bytes = 8; /* number of bytes for eentry on ELF64 */
		if (*(ebuf + endian_offset) == 0x01) /* check endianness */
		{
			i = e_entry_offset + addr_bytes;
			for (; i >= e_entry_offset; i--)
			{
				sigfig += *(e_entry + i);
				if (sigfig > 0)
					printf("%02x", *(e_entry + i));
			}
		}
		else
		{
			for (i = e_entry_offset; i < e_entry_offset + addr_bytes; i++)
			{
				sigfig += *(e_entry + i);
				if (sigfig > 0)
					printf("%02x", *(e_entry + i));
			}
		}
		printf("\n");
		return;
	}

	if (*(ebuf + endian_offset) == 0x01)
	{
		i = e_entry_offset + addr_bytes;
		for (; i >= e_entry_offset; i--)
		{
			sigfig += *(e_entry + i);
			if (sigfig > 0)
				printf("%02x", *(e_entry + i));
		}
	}
	else
	{
		for (i = e_entry_offset; i < e_entry_offset + addr_bytes; i++)
		{
			sigfig += *(e_entry + i);
			if (sigfig > 0)
				printf("%02x", *(e_entry + i));
		}
	}
	printf("\n");
}

/**
 * print_version - prints version
 * Description: prints version
 *
 * @ebuf: ELF Header buffer
 *
 * Return: void
 */
void print_version(unsigned char *ebuf)
{
	size_t version_offset = 6;
	unsigned char version;

	version = *(ebuf + version_offset);
	printf("  %-35s%x%10s\n", "Version:", version, " (current)");
}

/**
 * elf_endian - prints endianness
 * Description: prints endianness
 *
 * @ebuf: buffer containing ELF header bytes
 *
 * Return: void
 */
void elf_endian(unsigned char *ebuf)
{
	size_t data_offset = 5;
	unsigned char data;
	int complements = 1;
	char *lstr = "'s complement little endian";
	char *bstr = "'s complement big endian";

	data = *(ebuf + data_offset);

	if (-1 == ~0)
		complements = 2;

	if (data == 0x01)
	{
		printf("  %-35s%d%10s\n", "Data:", complements, lstr);
		return;
	}
	printf("  %-35s%d%10s\n", "Data:", complements, bstr);
}

/**
 * elf_class - prints elf class
 * Description: print class
 *
 * @ebuf: buffer containing ELF header bytes
 *
 * Return: void
 */
void elf_class(unsigned char *ebuf)
{
	size_t class_byte = 4;
	unsigned char file_class;
	char *cls = "Class:", *cls64 = "ELF64", *cls32 = "ELF32";

	file_class = *(ebuf + class_byte);
	if (file_class == 0x02)
	{
		printf("  %-30s%10s\n", cls, cls64);
		return;
	}
	printf("  %-30s%10s\n", cls, cls32);
}

/**
 * is_elf - checks if a file is ELF
 * Description: Checks if file is valid ELF
 *
 * @ebuf: buffer containing ELF header bytes
 *
 * Return: 1 if true, 0 Otherwise
 */
int is_elf(void *ebuf)
{
	unsigned char a, b, c, d;
	unsigned char *ebuf2 = (unsigned char *)ebuf;

	a = *(ebuf2);
	b = *(ebuf2 + 1);
	c = *(ebuf2 + 2);
	d = *(ebuf2 + 3);

	return (a == 0x7f && b == 0x45 && c == 0x4c && d == 0x46);
}

/**
 * print_magic - prints the magic number
 * Description: prints the Magic number of the header from the ELF file
 *
 * @ebuf: void buffer holding ELF header data (first 32 bytes)
 *
 * Return: void
 */
void print_magic(void *ebuf)
{
	size_t i;
	unsigned char ith_byte, *ith_addr;

	ith_addr = (unsigned char *)ebuf;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		ith_byte = *(ith_addr + i);
		if (i == 15)
		{
			printf("%02x\n", ith_byte);
			continue;
		}
		printf("%02x ", ith_byte);
	}
}

/**
 * check_osabi - checks the os system
 * Description: takes byte an returns the OS version
 *
 * @ebuf: value sitting in 0x07 of elf header
 *
 * Return: str, OS name
 */
char *check_osabi(unsigned char *ebuf)
{
	size_t osabi_byte = 8;
	unsigned char ei_osabi = *(ebuf + osabi_byte);

	switch (ei_osabi)
	{
	case 0x00: return ("UNIX - System V");
	case 0x01: return ("UNIX - HP-UX");
	case 0x02: return ("UNIX - NetBSD");
	case 0x03: return ("UNIX - GNU");
	case 0x04: return ("UNIX - GNU");
	case 0x05: return ("UNIX - GNU");
	case 0x06: return ("UNIX - Solaris");
	case 0x07: return ("UNIX - AIX");
	case 0x08: return ("UNIX - IRIX");
	case 0x09: return ("UNIX - FreeBSD");
	case 0x0A: return ("UNIX - TRU64");
	case 0x0B: return ("Novell - Modesto");
	case 0x0C: return ("UNIX - OpenBSD");
	case 0x0D: return ("VMS - OpenVMS");
	case 0x0E: return ("HP - Non-Stop Kernel");
	case 0x0F: return ("AROS");
	case 0x10: return ("FenixOS");
	case 0x11: return ("Nuxi CloudABI");
	case 0x12: return ("Stratus Technologies OpenVOS");
	}
	return ("<unknown: 53>");
}

/**
 * print_abi_version - prints ABI version
 * Description: prints ABI version
 *
 * @ebuf: ELF Header data buffer
 *
 * Return: void
 */
void print_abi_version(unsigned char *ebuf)
{
	size_t abiv_byte = 9;
	unsigned char ei_abiv = *(ebuf + abiv_byte);

	printf("  %-35s%d\n", "ABI Version", ei_abiv);
}

/**
 * check_type - checks the file type
 * Description: gets the file type name
 *
 * @ebuf: ELF Header data
 *
 * Return: str, file type
 */
char *check_type(void *ebuf)
{
	size_t type_offset = 16;
	unsigned char *bo_buf = (unsigned char *)(ebuf);
	unsigned short *filetype = (unsigned short *)(bo_buf + type_offset);

	/* if machine is little endian then the most significant byte is in
	 * the last byte address of an nbyte word, were n >= 2
	 * since we have a short (2 bytes), we reverse the word if it's
	 * little endian, by incrementing the address
	 */
	if (get_endianness())
		filetype = (unsigned short *)(bo_buf + type_offset + 1);

	switch (*filetype)
	{
	case 0x00:   return ("NONE (None)");
	case 0x01:   return ("REL (Relocatable file)");
	case 0x02:   return ("EXEC (Executable file)");
	case 0x03:   return ("DYN (Shared object file)");
	case 0x04:   return ("CORE (Core file)");
	case 0xFE00: return ("OS Specific: (0xfe00)");
	case 0xFEFF: return ("OS Specific: (0xfeff)");
	case 0xFF00: return ("Processor Specific: (0xff00");
	case 0xFFFF: return ("Processor Specific: (0xffff)");
	}
	return ("<unknown>: 0");
}

/**
 * get_endianness - gets the endianness of the current machine
 * Description: get the endianess of a linux system
 *
 * Return: int, 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n;
	unsigned char nth_byte, *nth_byte_addr;

	n = 0x22000044;

	nth_byte_addr = (unsigned char *)&n;
	nth_byte = *nth_byte_addr;

	/* nth_byte_addr is currently smallest address */
	/* if least significant byte of n (0x44) is in nth_byte_addr */
	/* then CPU is little endian, otherwise it is big endian */
	if (nth_byte == 0x44)
		return (1);
	return (0);
}
