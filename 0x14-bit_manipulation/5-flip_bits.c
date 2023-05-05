#include"main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number  of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclucive = n ^ m, bits = 0;

	while (exclucive > 0)
	{
		bits += (exclucive & 1);
		exclucive >>= 1;
	}

	return (bits);
}

