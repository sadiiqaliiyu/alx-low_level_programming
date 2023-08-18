#include "variadic_functions.h"

/**
 * print_all - prints everything
 * @format: a list of types of arguments
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list nums;
	unsigned int i = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(nums, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(nums, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(nums, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(nums, double)), c = 1;
			break;
		case 's':
			str = va_arg(nums, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} i++;
	}
	printf("\n"), va_end(nums);
}
