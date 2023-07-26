#include "sort.h"

/**
 * swap_ints - Swap two integers in an array.
 * @a: 1st integer to swap.
 * @b: 2nd integer to swap.
 */
void swap_ints(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * bubble_sort - Sort an arrays in ascending order
 * @array: An array of integers to sort.
 * @size: The size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, lent = size;
	bool chk = false;

	if (array == NULL || size < 2)
		return;

	while (chk == false)
	{
		chk = true;
		for (i = 0; i < lent - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				chk = false;
			}
		}
		lent--;
	}
}

