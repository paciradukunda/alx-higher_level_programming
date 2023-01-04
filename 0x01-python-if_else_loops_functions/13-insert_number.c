#include "lists.h"

/**
 * insert_node - inserts a new node
 *
 * @head: head of a list.
 * @number: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_node(listint_t **head, int number)
{
    listint_t *h = *head;
    unsigned int idx = 0;

    while (h != NULL)
	{
        idx++;

        if (h->n > number)
        {
            return (insert_nodeint_at_index(head, idx, number));
        }
        else
        {
            if (h->next->n > number)
            {
                idx++;
                return (insert_nodeint_at_index(head, idx, number));
            }
            else
            {
                if (h->next == NULL)
                {
                    return(add_nodeint_end(head, number));
                }
                h = h->next;
                idx++;
            }
        }
	}
}

/**
 * insert_nodeint_at_index - inserts a new node
 * at a given position.
 * @head: head of a list.
 * @idx: index of the list where the new node is
 * added.
 * @n: integer element.
 *
 * Return: the address of the new node, or NULL if it
 * failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *h;

	h = *head;

	if (idx != 0)
	{
		for (i = 0; i < idx - 1 && h != NULL; i++)
		{
			h = h->next;
		}
	}

	if (h == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = h->next;
		h->next = new;
	}

	return (new);
}