#include "main.h"

/**
 * Print_alphabet_x10 - Prints 10 times the alphabet,
 * in lowercase.
 */
void print_alphabet_x10(void)
{
	char letter;

		for (letter = 'a'; letter <= 'z'; letter++)
			-putchar(letter);
		_putchar('\n');
}
