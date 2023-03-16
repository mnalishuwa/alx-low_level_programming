#include "main.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	int i;
	long int result;

	if (argc - 1 != 2)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = 0; argv[1][i] != '\0'; i++)
	{
		if (argv[1][i] >= 48 && argv[1][i] < 58)
		{
			continue;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}

	for (i = 0; argv[2][i] != '\0'; i++)
	{
		if (argv[2][i] >= 48 && argv[2][i] < 58)
		{
			continue;
		}
		else
		{
			printf("Error\n");
			exit(98);
		}
	}

	printf("%ld\n", strtol(argv[1)) * strtol(argv[2]));

	return (0);

}
