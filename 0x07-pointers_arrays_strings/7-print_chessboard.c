#include "main.h"
#define LINE_FEED 10
/**
 * print_chessboard - prints characters to stdout representing a chessboard
 * Description: Function that takes a two dimensional array and prints the data
 *
 * @a: character array input into print funtion
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int row, col, len_a;

	len_a = sizeof(a) / sizeof(char);

	for (row = 0; row < len_a; row++)
	{
		for (col = 0; col < len_a; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar(LINE_FEED);
	}
}
