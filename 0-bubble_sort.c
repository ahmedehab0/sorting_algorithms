#include <stdio.h>
#include <stdlib.h>
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
 *bubble_sort - function that sorts an array using bubble sort algorithms
 *
 * @array: array of integers to be sorted
 *@size: number of elements in the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (array == NULL)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}

	}
}
