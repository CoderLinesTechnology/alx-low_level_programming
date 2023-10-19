#include "lists.h"

i/**
 * list_len - finds the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	size_t ele = 0;

	while (h)
	{
		ele++;
		h = h->next;
	}

	return (ele);
}

