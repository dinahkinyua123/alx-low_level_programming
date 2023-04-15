#include<stdio.h>
#include"main.h"
#include<stdlib.h>

/**
 * main - multiples two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: (0) perfect, (1) fail
 */
int main(int argc, char *argv[])
{
	int n1 = 0, n2 = 0;

	if (argc == 3)
	{
	n1 = atoi(argv[1]);
	n2 = atoi(argv[2]);
	printf("%d\n", n1 * n2);
	}
	else
	{
		printf("error\n");
		return (1);
	}

	return (0);
}

