#include "monty.h"

/**
 * ppo_pchar - change char to alpha
 * @head:- stack top
 * @lin_num:- num line
 * Return:- Always 0
 */

void ppo_pchar(stack_t **head, unsigned int lin_num)
{
	stack_t *today;

	if (!(*head) || !head)
	{
		error_handle(16, lin_num, "monty work");
	}

	today = *head;

	if (today->n > 127 || today->n < 0)
	{
		error_handle(15, lin_num, "monty work");
	}

	printf("%c\n", today->n);
}
