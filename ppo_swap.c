#include "monty.h"

/**
 * ppo_swap - function that swap nods
 * @lin_num:- lin number
 * @head:- head of list
 * Return:- Always 0
 */

void ppo_swap(stack_t **head, unsigned int lin_num)
{
	stack_t *today;
	stack_t *hlding = NULL;

	if (*head != NULL && (*head)->next)
	{
		today = *head;
		hlding = (*head)->next;
		today->next = hlding->next;
		today->prev = hlding;
		hlding->prev = NULL;

		if (hlding->next)
		{
			hlding->next->prev = today;
		}
		hlding->next = today;
	}
	else
	{
		error_handle(7, lin_num, "monty work");
	}

	*head = hlding;
}
