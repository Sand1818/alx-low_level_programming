#include "search_algos.h"

/**
 * interpolation_search - Searches for value in array using interpolation algorithm
 * @array: Pointer to array to search in
 * @size: The size of the array
 * @value: The value to look for
 * Return: Index of the found value, or -1 if not found
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1;
	size_t pos = 0;

	if (!array)
		return (-1);

	pos = low + (((double)(high - low) /
	(array[high] - array[low])) * (value - array[low]));
	while (pos < size)
	{
		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		else if (value > array[pos])
			low = pos + 1;
		else
			high = pos - 1;
		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
	}
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
