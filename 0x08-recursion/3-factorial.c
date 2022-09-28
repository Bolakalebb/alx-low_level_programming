#include "main.h"

/**
 * Factorial - Returns factorial of a given number.
 * @n: The number to findit's factorial.
 *
 * Return: If n > 0 - the factorial of n
 */
int factorial(int n)
{
	int result = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	result *= factorial(n - 1);

	return (result);
}
