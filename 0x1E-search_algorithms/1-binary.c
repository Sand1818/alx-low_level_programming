#include "search_algos.h"

/**
 * binary_search - Binary searches for value in array of int
 * @array: Pointer to array to search in
 * @size: The size of the array
 * @value: The value to look for
 * Return: Index of where value is located, -1 not found
 */

int binary_search(int *array, size_t size, int value)
{

	size_t a, mid, left = 0;
    size_t size = size - 1;


	if (array == NULL)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (a = left; a < right; a++)
			printf("%d, ", array[a]);
		printf("%d\n", array[right]);
		mid = (left + right) / 2;
		if (array[mid] == value)
			return (mid);
		else if (array[mid] > value)
			right = mid - 1;
		else
			left = mid + 1;
	}
	return (-1);
}
