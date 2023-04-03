#include"main.h"
/**
 * _memset - with a specific value fill a block of memory
 * @s: address of the memory to be filled
 * @b: the desied input value
 * @n:the number of bytes to be changed
 * Return:changed array with new values
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}

