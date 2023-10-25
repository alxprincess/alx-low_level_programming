#include "lists.h"

/**
 * print_listint - to print all the elements of a linked list
 * @a: linked list of type listint_t to print
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *a)
{
size_t num = 0;

while (a)
{
printf("%d\n", a->n);
num++;
a = a->next;
}

return (num);
}
