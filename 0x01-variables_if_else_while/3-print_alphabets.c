#include<stdio.h>
/**
 * main - print the aphabet.
 * Return:0(perfect)
 */
int main(void)
{
	char alp[52] = "abcdefghijklnmopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		putchar(alp[i]);
	}
	putchar('\n');
	return (0);
}

