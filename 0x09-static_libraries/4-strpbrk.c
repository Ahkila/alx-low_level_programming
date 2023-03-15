#include "main.h"

/**
 * _strpbrk - function locates the first occurrence in the string
 * @s: input char
 * @accept: input char
 * Return: 0
 */
char *_strpbrk(char *s, char *accept)
{
	int l;

	while (*s)
	{
		for (l = 0; accept[l]; l++)
		{
		if (*s == accept[l])
		return (s);
		}
	s++;
	}
	return ('\0');
}
