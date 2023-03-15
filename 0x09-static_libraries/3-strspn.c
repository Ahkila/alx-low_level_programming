#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: input char
 * @accept: input char
 * Return: a
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int p;

	while (*s)
	{
		for (p = 0; accept[p]; p++)
		{
			if (*s == accept[p])
			{
				a++;
				break;
			}
			else if (accept[p + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
