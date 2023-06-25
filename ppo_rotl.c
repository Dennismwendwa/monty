#include "monty.h"

/**
 * ppo_rotl - function that rotates elements
 * @lin_num:- lin num
 * @start:- head of stack
 * Return: Always 0
 */

void ppo_rotl(stack_t **start, unsigned int lin_num)
{
	stack_t *pu;
	stack_t *down;

	(void) lin_num;

	if (!start || !*start || !(*start)->next)
		return;

	down = pu = *start;

	while (pu->next)
	{
		pu = pu->next;
	}

	pu->next = down;
	down->prev = pu;
	*start = down->next;
	(*start)->prev->next = NULL;
	(*start)->prev = NULL;
}
