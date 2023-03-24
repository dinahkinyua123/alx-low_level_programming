#include<stdio.h>
/**
 * main - prints numbers from 1 to 100 follwed by  new line
 * but multiplies for the three prints Fizz instead of the numbers
 * and multiples of five prints Buzz
 * Return: 0 (perfect)
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
	if (i % 3 == 0 && i % 5 != 0)
	{
	printf("Fizz");
	}

	else if (i % 5 == 0 && i % 3 != 0)
	{
	printf("Buzz");
	printf(" ");
	}

	else if (i % 3 == 0 && i % 5 == 0)
	{
	printf("FizzBuzz");
	}

	else if (i == 1)
	{
	printf("%d", i);
	printf(" ");
	}

	else
	{
	printf("%d", i);
	printf(" ");
	}
	}
	printf("\n");
	printf(" ");

	return (0);
}

