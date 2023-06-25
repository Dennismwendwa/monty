#include "monty.h"

/**
 * ppo_rotr - function that rotates stack to bottom
 * @lin_num:- lin num
 * @start:- head of stack
 * Return: Always 0
 */

void ppo_rotr(stack_t **start, unsigned int lin_num)
{
	stack_t *pu;
	stack_t *down;

	(void) (!start || !*start || !(*start)->next)
		return;

	down = *start;
	while (down->next)
	{
		down = down->next;
	}

	pu = pu->prev;
	down->down = *start;
	down->prev = NULL;
	pu->next = NULL;

	(*start)->prev = down;
	*start = down;
}
