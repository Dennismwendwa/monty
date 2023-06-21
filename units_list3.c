#include "monty.h"

/**
 * ppo_pop - remove stack element
 * @lin_num:- list number
 * @head:- list head
 * Return:- Always 0
 */

void ppo_pop(stack_t **head, unsigned int lin_num)
{
	stack_t *today;

	if (head == NULL || *head == NULL)
	{
		error_handle(6, lin_num, "monty work");
	}

	today = *head;
	*head = today->next;

	if (today->next != NULL)
	{
		today->next->prev = NULL;
	}

	free(today);
}
