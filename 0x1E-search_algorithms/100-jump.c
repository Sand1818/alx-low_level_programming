#include "search_algos.h"

/**
 * jump_search - Searches for value in array using jump search algorith
 * @array: Pointer to array to search in
 * @size: The size of the array
 * @value: The value to look for
 * Return: Index of the found value, or -1 if not found
 */

int jump_search(int *array, size_t size, int value)
{
	size_t jump, a, index;

	jump = (size_t)sqrt(size);
	if (!array)
		return (-1);
	for (index = 0; index < size; index += jump)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (value == array[index]
			|| ((index + jump >= size)
			|| (value == array[index + jump]))
			|| (value > array[index] && value < array[index + jump]))
		{
			printf("Value found between indexes [%ld] and [%ld]\n",
					index, index + jump);
			for (a = index; a < size && a <= index + jump; a++)
			{
				printf("Value checked array[%ld] = [%d]\n", a, array[a]);
				if (array[a] == value)
					return (a);
			}
		}
	}
	return (-1);
}
