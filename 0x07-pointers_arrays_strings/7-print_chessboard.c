#include"main.h"
/**
 * print_chessboard - entry point
 *
 * @a:array
 * Return: (0) perfect
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int y;

	for (i = 0; i < 8; i++)
	{
		for (y = 0; y < 8; y++)
			_putchar(a[i][y]);
		_putchar('\n');
	}
}

