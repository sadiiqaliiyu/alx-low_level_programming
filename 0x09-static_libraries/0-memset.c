#include "main.h"
/**
 *_memset - fills memory witha a constant byte
 *@s: memory area
 *@b: constant byte
 *@n: bytes filled
 *Return: the pointer to char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
