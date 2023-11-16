#include "lists.h"

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Pointer to the head of the list
 * @str: String to be duplicated and stored in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *tmp;
	unsigned int j, count = 0;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	return (NULL);

	new_node->str = strdup(str);
	for (j = 0 ; str[j] != '\0' ; j++)
	count++;

	new_node->len = count;
	new_node->next = NULL;
	tmp = *head;

	if (tmp == NULL)
	*head = new_node;
	else
	{
	while (tmp->next != NULL)
	tmp = tmp->next;
	tmp->next = new_node;
	}
	return (*head);
}
