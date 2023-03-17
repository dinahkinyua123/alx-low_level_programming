#include<stdio.h>
/**
 * main - prints all possible combinations of single-digit number.
 * Return:0 (perfect)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
return (0);
}
