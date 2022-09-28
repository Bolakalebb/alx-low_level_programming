#include "main.h"

/**
 * Factorial - Returns factorial of a given number.
 * @n: The number to findit's factorial.
 *
 * Return: If n > 0 - the factorial of n
 * If n < 0 - 1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n <= 1)
		return (1);

	return (n * factorial(n - 1));
}
