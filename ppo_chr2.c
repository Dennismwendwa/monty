#include "monty.h"

/**
 * ppo_pstr - changing stack ascii
 * @head:- stack tp
 * @lin_num:- num lin
 * Return:- Always 0
 */

void ppo_pstr(stack_t **head, unsigned int lin_num)
{
	stack_t *today;

	(void)lin_num;

	today = *head;
	while (today)
	{
		if (today->n > 127 || today->n < 32)
		{
			break;
		}

		printf("%c", today->n);
		today = today->next;
	}

	printf("\n");
}
