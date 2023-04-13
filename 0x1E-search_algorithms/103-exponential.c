#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 *                      using the Exponential search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 *
 * Return: the first index where value is located, or -1 if value is not
 *         present in array or if array is NULL
 *
 * Description: This function performs an Exponential search by repeatedly
 *              doubling an index to find an appropriate range to search
 *              within, then calling a binary search function to search
 *              within that range. Each time an index or range is checked,
 *              the function prints out the relevant value(s).
 */

int exponential_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0)
        return (-1);

    /* Check if the value is present at the first index */
    if (array[0] == value)
        return (0);

    /* Find an appropriate range to search within using exponential search */
    int i = 1;
    while (i < size && array[i] <= value)

	printf("Checked array[%d] = %d\n", i, array[i]);
	i *= 2;
}
    int low = i / 2;
    int high = fmin(i, size - 1);

    /* Perform a binary search within the chosen range */
    printf("Value found between indexes [%d] and [%d]\n", low, high);
    while (low <= high)
{
        int mid = (low + high) / 2;
        printf("Searching in array[%d]...[%d]\n", low, high);
        if (array[mid] == value)
	{
            return (mid);
        } else if (array[mid] < value)

            low = mid + 1;

	 else
            high = mid - 1;

    }

    /* If the value was not found, return -1 */
    return -1;
}
