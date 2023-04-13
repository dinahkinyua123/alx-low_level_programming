#include<stdlib.h>
#include"main.h"
/**
 * *string_nconcat - link n bytes of a string to another string
 * @s1: string to appnd to
 * @s2: string to link from
 * @n: number of bytes from s2to link to s1
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, x = 0, y = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;

	while (s2[x])
		x++;
	if (n >= x)
		y = i + x;
	else
		y = i + n;

	s = malloc(sizeof(char) * y + 1);
	if (s == NULL)
		return (NULL);

	x = 0;
	while (j < i)
	{
		if (j <= i)
			s[j] = s1[j];

		if (j >= i)
		{
			s[j] = s2[x];
			x++;
		}
		j++;
	}
	s[j] = '\0';
	return (s);
}

