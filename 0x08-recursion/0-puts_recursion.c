#include "main.h"

/**
 *_puts_recursion - prints a string and followed with a newline
 *@s: string argument
 *Return: no return
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	else
		_putchar('\n');
}
