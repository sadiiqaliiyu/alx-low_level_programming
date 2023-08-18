#include "variadic_functions.h"
/**
 *print_strings - print strings
 *@separator: string to be printed
 *@n: number of strings to be passed
 *
 *Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	char *str;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nums, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
