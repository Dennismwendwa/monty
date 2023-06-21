#include "monty.h"

/**
 * ppo_nop - display elements of list
 * @lin_num:- number num
 * @head:- list head
 * Return:- Always 0
 */

void ppo_nop(stack_t **head, unsigned int lin_num)
{
	int l = 1;

	(void)head;
	(void)lin_num;

	while (l >= 0)
	{
		l--;

		continue;
	}
}

/**
 * stack_free - freeing list
 * @head:- list head
 * Return:- Always 0
 */

void stack_free(stack_t *head)
{
	stack_t *nw;

	while (head)
	{
		nw = head;
		head = head->next;
		free(nw);
	}

	free(head);
}
