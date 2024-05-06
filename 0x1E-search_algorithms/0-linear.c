#include "search_algos.h"

/**
 * linear_search - Searches for value in an array of intergers
 * @array: Pointer to array to search in
 * @size: The size of the array
 * @value: The value to look for
 * Return: Index of the found value, or -1 if not found.
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i = 0;

    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
