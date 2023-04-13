#include "search_algos.h"
#include <math.h>

int jump_search(int *array, size_t size, int value)
{
    if (array == NULL || size == 0) {
        return -1;
    }

    int step = sqrt(size);
    int prev = 0;
    int curr = step;

    while (curr < size && array[curr] < value) {
        printf("Value checked array[%d] = [%d]\n", curr, array[curr]);
        prev = curr;
        curr += step;
    }

    printf("Value found between indexes [%d] and [%d]\n", prev, curr);

    while (prev <= fmin(curr, size - 1))
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
        if (array[prev] == value)
          
          return (prev);
      
      prev++;
    }

    return (-1);
}
