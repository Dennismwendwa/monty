#include "monty.h"

/**
 * ppo_push - add element to list
 * @lin_num:- number frm user
 * @list_add:- number lin
 * Return: Always 0
 */

void ppo_push(stack_t **list_add, unsigned int lin_num)
{
	stack_t *today = *list_add;
	stack_t *nw = malloc(sizeof(stack_t));

	if (!nw)
	{
		error_handle(4, lin_num, "monty work");
	}

	nw->n = n;
	nw->prev = NULL;
	nw->next = today;

	if (*list_add)
	{
		today->prev = nw;
	}

	*list_add = nw;
}
