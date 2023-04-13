#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using the Interpolation search algorithm.
 *
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in array.
 * @value: Value to search for.
 *
 * Return: The index of the first occurrence of the value in the array,
 * or -1 if the value is not found or the array is NULL.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int l = 0;
	int m = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (l <= m && value >= array[l] && value <= array[m])
	{
	size_t pos = l + (((double)(m - l) / (array[m] - array[l]))
			* (value - array[l]));
		int val = array[pos];

		printf("Comparing value %d\n", val);

		if (val == value)
		{
			return (pos);
		}
		else if (val < value)

			l = pos + 1;
		else
			m = pos - 1;
	}

	return (-1);
}
