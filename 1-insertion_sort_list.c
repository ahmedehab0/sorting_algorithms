#include "sort.h"

/**
* insertion_sort_list - insertion sorting algorithm
* @list: linked list to sort
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	int n;

	tmp = *list;
	while (tmp->next != NULL)
	{
		while (tmp != NULL && tmp->n > (tmp->next)->n)
		{
			n = tmp->n;
			*(int *)&tmp->n = tmp->next->n;
			*(int *)&tmp->next->n = n;
			tmp = *list;
			print_list(*list);
		}
		tmp = tmp->next;
	}
}
