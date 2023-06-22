#include "monty.h"

/**
 * ppo_div - function that div top element
 * @lin_num:- lin number
 * @head:- list head
 * Return:- Always 0
 */

void ppo_div(stack_t **head, unsigned int lin_num)
{
	stack_t *today;
	int j = 0;

	if (*head && (*head)->next)
	{
		if ((*head)->n == 0)
		{
			error_handle(11, lin_num, "monty work");
		}

		today = *head;
		j = today->next->n / today->n;
		today->next->n = j;
		today->next->prev = NULL;
		*head = (*head)->next;
		free(today);
	}
	else
	{
		error_handle(10, lin_num, "monty work");
	}
}
