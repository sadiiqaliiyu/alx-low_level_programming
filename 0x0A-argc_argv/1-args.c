#include <stdio.h>
/**
 * main - prints out number of argument
 * @argc: number of arguments
 * @argv: array strings argument
 *
 * Return: always 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
