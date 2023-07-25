#include "sort.h"

/**
 * selection_sort - sort an array of integers in ascending order
 *	using the selection sort algorithm
 * @array: An array of integers
 * @size: The size of the array
 *
 * Return: void
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, index;
	int temp;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[index])
				index = j;
		}

		if (index != i)
		{
			temp = array[i];
			array[i] = array[index];
			array[index] = temp;

			print_array(array, size);
		}
	}
}
