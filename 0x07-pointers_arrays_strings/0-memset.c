#include "main.h"

/**
 * _memset - fills the firstn bytes of the memory area pointed
 * @s: starting memory to be filled
 * @b: value inputted
 * @n: bytes to be changed
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
