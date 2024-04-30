#include "sort.h"

/**
 * bubble_sort - sorting algorithms that sorts large numbers first.
 * @array: Numbers to be sorted.
 * @size: No of numbers to be sorted.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int small;

	if (array == NULL  || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				small = array[j];
				array[j] = array[j + 1];
				array[j + 1] = small;
				print_array(array, size);
			}
		}
	}
}
