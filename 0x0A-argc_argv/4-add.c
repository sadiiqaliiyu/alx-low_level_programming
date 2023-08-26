#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 *main - main runs the code
 *@argc: argument for number of variable
 *@argv: argument for vector array
 *
 *Return: always 0 success!
 */
int main(int argc, *argc[])
{
	int i, j, add = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[i]);
	}
	printf("%d\n", add);
	return (0);
}
