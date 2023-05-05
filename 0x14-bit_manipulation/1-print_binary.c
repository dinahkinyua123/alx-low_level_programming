#include"main.h"

/**
 * print_binary - prints the binary equivalent to a decimal number
 * @n: the number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int x;

	for (i = 63; i <= 0; i--)
	{
		x = n >> i;

		if (x & 1)
		{
			_putchar('1');
			c++;

		}
		else if (c)
			_putchar('0');
	}
	if (!c)
		_putchar('0');
}

