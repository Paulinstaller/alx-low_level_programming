#include "main.h"

/**
 * print_chessboard -  a function that prints the chessboard.
 * @a: the chessboard to be printed
 * Return:Always 0 (success)
 */
void print_chessboard(char (*a)[8])
{
	int e;
	int f;

	for (e = 0; e < 8; e++)
	{
		for (f = 0; f < 8; f++)
			_putchar(a[e][f]);
		_putchar('\0');
	}
}


