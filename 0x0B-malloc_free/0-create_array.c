#include"main.h"
#include<stdlib.h>
/**
 * _create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 *
 * Return: pointer of array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int x;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		str[x] = c;
	return (str);
}

