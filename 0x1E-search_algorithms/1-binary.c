#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 *
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 *
 * Return: value to be searched for, else return -1 if array equals
 * to NULL, or if value not in array.
 */

int binary_search(int *array, size_t size, int value)
{
	size_t first, last, middle, i;

	first = 0;
	last = (size - 1);

	while (first <= last)
	{
		middle = (first + last) / 2;

		if (array == NULL)
			return (-1);

		printf("Searching in array:");

		for (i = first; i <= last; i++)
			printf("%s %d", (i == first) ? ":" : ",", array[i]);

		printf("\n");

		if (array[middle] == value)
			return ((int)middle);
		else if (array[middle] > value)
			last = middle - 1;
		else
			first = middle + 1;
	}
	return (-1);
}









