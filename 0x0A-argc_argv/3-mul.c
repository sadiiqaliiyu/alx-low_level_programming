#include <stdio.h>
#include <stdlib.h>
/**
 *main - main returns the multiplication of two arguments
 *followed by a newline
 *@argc: counts number of argumnents
 *@argv: holds an array of strings
 *
 *Return: 0(success)
 */
int main(int argc, char *argv[])
{
	int i;
	int mul = 1;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 1; i <= (argc - 1); i++)
		{
			mul *= atoi(argv[i]);
		}
		printf("%d\n", mul);
	}
	return (0);
}
