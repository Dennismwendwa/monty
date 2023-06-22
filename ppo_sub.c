#include "monty.h"

/**
 * ppo_sub - function that removes elements
 * @lin_num:- lin num
 * @head:- list head
 * Return:- Always
 */

void ppo_sub(stack_t **head, unsigned int lin_num)
{
	stack_t *today;
	int j = 0;

	if (*head && (*head)->next)
	{
		today = *head;
		j = today->next->n - today->n;
		today->next->n = j;
		today->next->prev = NULL;
		*head = (*head)->next;
		free(today);
	}
	else
	{
		error_handle(9, lin_num, "monty work");
	}
}
