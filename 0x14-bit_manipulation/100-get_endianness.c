#include "main.h"

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
