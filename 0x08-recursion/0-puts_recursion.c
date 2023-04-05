#include"main.h"
/**
 * _puts_recursion - functions like put ();
 * @s: input value
 * Return: (0) perfect
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar (*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar ('\n');
}

