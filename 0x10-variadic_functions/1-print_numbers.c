#include "variadic_functions.h"
/**
 *print_numbers -prints numbers.
 *@separator: string to be printed
 *@n: number of int passed to function
 *
 *Return: none
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
