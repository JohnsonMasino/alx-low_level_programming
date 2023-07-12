#include "search_algos.h"

/**
 * binary_search searches a value in an array
 *  using binary Search algorithm.
 * @array: pointer to the array
 * @size: number of elements in the array
 * @value: the value to search for
 * Return: first index where val is located
 */

int binary_search(int *array, size_t size, int value)
{
	int c;
	int mid;
	int left = 0;
	int right = size - 1;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (c = left; c < right; c++)
			printf("%d, ", array[c]);

		printf("%d\n", array[right]);
		mid = (right + left) / 2;

		if (value > array[mid])
			left = mid + 1;

		else if (value < array[mid])
			right = mid - 1;

		else
			return (mid);
	}
	return (-1);
}
