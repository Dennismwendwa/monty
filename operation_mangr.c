#include "monty.h"

/**
 * gett_op - function that gets op
 * @k:- str of chr
 * @cont:- records ints
 * Return:- Always 0
 */

void (*gett_op(char *k, unsigned int cont))((stack_t **stack, unsigned int h))
{
	int j;

	instruction_t ops[] = {
		{"push", ppo_push},
		{"pall", ppo_pall},
		{"pint", ppo_pint},
		{"pop", ppo_pop},
		{"swap", ppo_swap},
		{"add", ppo_add},
		{"nop", ppo_nop},
		{"sub", ppo_sub},
		{"div", ppo_div},
		{"mul", ppo_mul},
		{"mod", ppo_mod},
		{"pchar", ppo_pchar},
		{"pstr", ppo_pstr},
		{NULL, NULL}
	};

	j = 0;

	if (k && k[0] != '#')
	{
		while (ops[j].opcode != NULL)
		{
			if (strcmp(ops[j].opcode, k) == 0)
			{
				return (ops[j].f);
			}
			j++;
		}

		error_handle(3, cont, k);
		return (NULL);
	}
	else
	{
		return (ops[6].f);
	}
}
