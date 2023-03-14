#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenate all args in argv
 * Description: concatenates all strings in argv
 *
 * @ac: int, total number of args
 * @av: pointer to pointer or array of commandline args as strings
 *
 * Return: string pointer, arg[1] + arg[2] + .... + argv[n], n = 1,..,argc
 */

char *argstostr(int ac, char **av)
{
	char *args_cnctd;
	int args_len_s, len_arg, i, j, k;

	ac--;
	if (ac < 0 || !av)
		return (NULL);

	for (i = 0, args_len_s = 0; i <= ac; i++)
	{
		if (av[i])
			args_len_s += strlen(av[i]);
	}

	args_len_s += (ac + 1) + (ac - 1);

	args_cnctd = malloc(args_len_s * sizeof(char));

	if (!args_cnctd)
		return (NULL);

	for (i = 0, k = 0; i <= ac; i++)
	{
		if (av[i])
		{
			len_arg = strlen(av[i]);
			for (j = 0; j < len_arg; k++, j++)
				args_cnctd[k] = av[i][j];
			args_cnctd[k] = '\n';
			args_cnctd[++k] = '\r';
		}
	}

	return (args_cnctd);
}
