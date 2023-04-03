#include"main.h"
/**
 * _memcpy - copying the memory area
 * @dest: memory storage
 * @src: where the memory is to be copied
 * @n: number of bytes
 * Return: copied memory with n byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int i = n;

	for (; x < i ; x++)
	{
	 dest[x] = src[x];
	 n--;
	}
	return (dest);
}

