#include <stdio.h>
/**
 *main - main prints all argument
 *@argv: argument vector
 *@argc: argument counter
 *Return: 0 (success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}