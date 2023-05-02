#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using
 * linear search algorithm.
 * @array: array to be searched
 * @size: size of array
 * @value: value being searched for
 *
 * Return: -1 if array is equal to null or if value not found in array,
 * else return location of value.
 */


int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
