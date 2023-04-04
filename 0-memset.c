
#include "holberton.h"
/**
 * _memset - functn that fills memory with a constnt byte
 *@s: first value
 *@b: 2nd value
 *@n: thirth value
 *
 * Return: char with result of memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
