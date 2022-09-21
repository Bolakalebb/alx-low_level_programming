#include "main.h"

/**
 * strcat - concatenates the string pointed to by @src, including
 * the terminating null byte, to the end of the
 * string pointed to by the @dest.
 * @dest: A pointer to the string to be concatenated upon.
 * @src: The source string to be appended to @dest.
 *
 * Return: A pointer to the destination string @dest.
 */
char *strcat(char *dest, const char *src)
{
	int c, d;

	c = d = 0;
	while (*(dest + c))
		c++;
	while (d < n && *(src + d))
	{
		*(dest + c) = *(src +d);
		c++;
		d++;
	}
	if (d < n)
		*(dest + c) = *(src + d);
	return (dest);
}
