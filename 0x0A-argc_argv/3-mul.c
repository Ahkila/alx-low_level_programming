#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - function that multiples two args number
 * @argc: args to be counted
 * @argv: agrs vector
 * Return: 0
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		prinf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
