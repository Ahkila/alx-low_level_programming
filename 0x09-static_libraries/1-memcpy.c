#include "main.h"

/**
 * _memcpy - function copies n bytes from memory area
 * @dest: where memory is stored
 * @src: where memory is copied
 * @n: bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int w = 0;
	int p = n;

	for (; w < p; w++)
	{
		dest[w] = src[w];
		n--;
	}
	return (dest);
}
