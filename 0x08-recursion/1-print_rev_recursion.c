#include <stdio.h>
#include "main.h"
#include <string.h>
/**
 *_print_rev_recursion - print text in reverse
 *@s: string argument
 */

void _print_rev_recursion(char *s)
{
	int i;
	char *string = s;
	char revString[6];
	int j;

	for (i = strlen(string) - 1; i >= 0; i--)
	{
		revString[j++] = string[i];
	}
	printf("%s\n", revString);
}
