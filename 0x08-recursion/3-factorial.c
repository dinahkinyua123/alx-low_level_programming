#include"main.h"
/**
 * factorial - shows the factorial of a number
 * @n: the input number
 * Return: factorial of n
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}

