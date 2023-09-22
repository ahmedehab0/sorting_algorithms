#include "sort.h"

/**
 *swap - swaps two elements
 *
 *@xp: pointer to the first element
 *@yp: pointer to the second element
 */
void swap(int *xp, int *yp)
{
int temp;

temp = *xp;
*xp = *yp;
*yp = temp;
}
/**
 *selection_sort - sort an array using selection sort algorithm
 *
 *@array: array of integers to be sorted
 *@size: number of elements in the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			swap(&array[min], &array[i]);
			print_array(array, size);
		}
	}
}
