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
 *quick_sort - function that sorts an array using quick sort alogorithm
 *@array: array of integers
 *@size: number of elements in the array
 *
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursion(array, 0, (int) size - 1, size);
}
/**
 *quick_sort_recursion - function that sorts an array using quick sort
 *alogorithm
 *
 *@array: array of integers
 *@low: first index
 *@high: last index
 *@size: number of elements in the array
 */
void quick_sort_recursion(int *array, int low, int high, size_t size)
{
	int pivot_index;

	if (low < high)
	{
		pivot_index = partition(array, low, high, size);
		quick_sort_recursion(array, low, pivot_index - 1, size);
		quick_sort_recursion(array, pivot_index + 1, high, size);
	}
}
/**
 *partition - function that sorts an array using quick sort alogorithm
 *@array: array of integers
 *@low: first index
 *@high: last index
 *@size: number of elements in the array
 *
 * Return: pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int pivot, i, j;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (i < j)
			{
				swap(&array[j], &array[i]);
				print_array(array, size);
			}
			i++;
		}
	}
	if (array[i] > pivot)
	{
		swap(&array[i], &array[high]);
		print_array(array, size);
	}
	return (i);
}

