#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase,
 * followed by a new line.
 */
void print_alphabet(void)
{
	int aj;

	for (aj = 'a'; aj <= 'z'; aj++)
	{
		_putchar(aj);
	}
	_putchar('\n');
}
