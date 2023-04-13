#include "search_algos.h"
#include <math.h>

/*
 * jump_search - searches for a value in a sorted array of integers
 * using the Jump search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t x = 0, y = 0, step = sqrt(size);

	if (!array || size == 0)
		return (-1);

	while (y < size && array[y] < value)
	{
		x = y;
		y += step;
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);

	}
	printf("Value found between indexes [%lu] and [%lu]\n", x, y);

	while (x < y)
	{
		printf("Value checked array[%lu] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);
		x++;
	}

	return (-1);
}
