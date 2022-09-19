#include "main.h"

/**
 * _strlen - Returns the length of a string.
 * @str: An input string
 * Return: Nothing
 */
int_strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);
}
