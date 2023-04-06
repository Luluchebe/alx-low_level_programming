#include "main.h"

/**
 * _strlen_recursion - string length
 * @s: string to be checked
 * Return: Lenght of the string
 */

int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s)

	{
		n++;
		n += _strlen_recursion(s + 1);
	}
	return (n);
}
