#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint -  function that adds a new node at the beginning of,
 * a listint_t list.
 * @head: pointer to the pointer of head of linked list.
 * @n: data to add to the list.
 *
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/**
	 * Algorithm
	 * 1. Create a new node with the given data.
	 * 2. Make the new node point to the head node.
	 * 3. Finally, make the new node as the head node.
	 */

	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
