#include "main.h"
/**
 *_print_rev_recursion - print text in reverse
 *@s: string argument
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
