#include<stdio.h>
/**
 * main - prints the lowercase letters in reverse.
 * Return: 0 on success
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
return (0);
}
