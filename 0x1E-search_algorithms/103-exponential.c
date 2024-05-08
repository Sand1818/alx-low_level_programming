#include "search_algos.h"

/**
 * _Binary_search - makes binary search on the given subarray
 * @array: Pointer to array to search in
 * @first: Start index of array to search
 * @last: Ending index of array to search
 * @value: value to search for
 * Return: returns index of value or -1
 */

int _Binary_search(int *array, size_t first, size_t last, int value)
{
	size_t middle;
	int a;

	if (first > last)
		return (-1);
	printf("Searching in array: ");
	for (middle = first; middle <= last; middle++)
	{
		if (middle != first)
			printf(", ");
		printf("%d", array[middle]);
	}
	printf("\n");
	middle = (first + last) / 2;
	if (array[middle] == value)
		return (middle);
	else if (value < array[middle])
		a = _Binary_search(array, first, middle - 1, value);
	else if (value > array[middle])
		a = _Binary_search(array, middle + 1, last, value);
	return (a);
}

/**
 * exponential_search - a function that searches for a value
 * in a sorted array of integers using the Exponential search algorithm
 * @array: Pointer to array to search in
 * @size: The size of the array
 * @value: The value to look for
 * Return: Index of the found value, or -1 if not found
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i, first, last;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	for (i = 1; i < size && array[i] <= value; i *= 2)
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	first = i / 2;
	last = i;
	if (i >= size)
		last = size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", first, last);
	return (_Binary_search(array, first, last, value));
}
