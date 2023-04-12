#include <stdio.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
*/
int linear_search(int *array, size_t size, int value);

int main(void)
{
	int arr[] = { 5, 2, 7, 10, 1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	int value = (7);

	int index = linear_search(arr, size, value);

	if (index == -1)
	printf("Value %d not found in the array.\n", value);

	else

	printf("Value %d found at index %d.\n", value, index);

	return (0);
}
