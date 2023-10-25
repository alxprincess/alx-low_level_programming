#include "lists.h"

/**
 * get_nodeint_at_index - to return node at a certain index in a linked list
 * @head: thefirst node in the linked list
 * @index: theindex of the node to return
 *
 * Return: the pointer to the node we are in search of, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
unsigned int i = 0;
listint_t *temp = head;

while (temp && i < index)
{
temp = temp->next;
i++;
}

return (temp ? temp : NULL);
}
