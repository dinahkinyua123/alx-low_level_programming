#include"main.h"

/**
 * get_bit - returns the value of a bit at an index in decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int y;

	if (index > 63)
		return (-1);

	y = (n >> index) & 1;

	return (y);
}

