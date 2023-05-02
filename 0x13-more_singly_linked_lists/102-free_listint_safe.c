#include <stdlib.h>
#include "lists.h"

/**
* free_listint_safe - Frees a listint_t linked list.
*
* @h: Pointer to the head of the list.
*
* Return: The number of nodes in the list that were freed.
*/
size_t free_listint_safe(listint_t **h)
{
size_t count = 0;
listint_t *temp, *current = *h;
while (current != NULL)
{
count++;
if (current < current->next)
{
temp = current->next;
free(current);
current = temp;
}
else
{
free(current);
*h = NULL;
break;
}
}

return (count);
}

