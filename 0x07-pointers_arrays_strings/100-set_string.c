#include "main.h"
/**
 * set_string - function that sets the value of a pointer
 * @s: points a pointer to a pointer
 * @to: points to a char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
