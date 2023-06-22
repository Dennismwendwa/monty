#include "monty.h"

/**
 * ppo_pall - element display
 * @lin_num:- num line
 * @head:- list head
 * Return:- Always 0
 */

void ppo_pall(stack_t **head, unsigned int lin_num)
{
	int l = 0;

	stack_t *now = list;

	(void)lin_num;
	(void)head;


	while (now != NULL)
	{
		printf("%d\n", now->n);
		now = now->next;
		l++;
	}
}
