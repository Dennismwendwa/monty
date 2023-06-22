#include "monty.h"

/**
 * ppo_mul - function that mul top element data
 * @lin_num:- lin number
 * @head:- list head
 * Return:- Always 0
 */

void ppo_mul(stack_t **head, unsigned int lin_num)
{
	int j = 0;
	stack_t *today;

	if (*head != NULL && (*head)->next)
	{
		today = *head;
		j = today->n * today->next->n;
		today->next->n = j;
		today->next->prev = NULL;
		*head = (*head)->next;
		free(today);
	}
	else
	{
		error_handle(12, lin_num, "monty work");
	}
}
