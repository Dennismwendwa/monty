#include "monty.h"
void mini_error_handle(int flg, unsigned int lin_num);


/**
 * error_handle - error checker
 * @nme:- file name
 * @lin_num:- error lin
 * @flg:- error flg
 * Return:- Always 0
 */

void error_handle(int flg, unsigned int lin_num, char *nme)
{
	if (flg == 1)
	{
		fprintf(stderr, "Error: malloc failed\n");
	}
	else if (flg == 2)
	{
		fprintf(stderr, "Error: Cant open file %s\n", nme);
	}
	else if (flg == 3)
	{
		fprintf(stderr, "L%u: unknown instruction %s\n", lin_num, nme);
	}
	else if (flg == 4)
	{
		fprintf(stderr, "L%u: push integer\n", lin_num);
	}
	else if (flg == 5)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", lin_num);
	}
	else if (flg == 6)
	{
		fprintf(stderr, "L%u: can't pop an empty stack\n", lin_num);
	}
	else if (flg == 7)
	{
		fprintf(stderr, "L%u: can't swap, stack too short\n", lin_num);
	}
	else if (flg == 8)
	{
		fprintf(stderr, "L%u: can't add, stack too short\n", lin_num);
	}
	else if (flg == 9)
	{
		fprintf(stderr, "L%u: can't sub, stack too short\n", lin_num);
	}
	else if (flg == 10)
	{
		fprintf(stderr, "L%u: can't div, stack too short\n", lin_num);
	}
	else
	{
		mini_error_handle(flg, lin_num);
	}

	list_free(&tok_get);
	stack_free(list);
	free(token);

	if (flg != 2)
	{
		fclose(fp);
	}

	exit(EXIT_FAILURE);
}

/**
 * mini_error_handle - checking error
 * @lin_num:- error lin
 * @flg:- Error flg
 * Return:- Always 0
 */

void mini_error_handle(int flg, unsigned int lin_num)
{
	if (flg == 11)
	{
		fprintf(stderr, "L%u: div by 0\n", lin_num);
	}
	else if (flg == 12)
	{
		fprintf(stderr, "L%u: can't mul, stack too short\n", lin_num);
	}
	else if (flg == 13)
	{
		fprintf(stderr, "L%u: can't mod, stack too short\n", lin_num);
	}
	else if (flg == 14)
	{
		fprintf(stderr, "L%u: div by 0\n", lin_num);
	}
	else if (flg == 15)
	{
		fprintf(stderr, "L%u: can't pchar, value out of range\n", lin_num);
	}
	else if (flg == 16)
	{
		fprintf(stderr, "L%u: can't pchar, stack empty\n", lin_num);
	}
	else if (flg == 0)
	{
		fprintf(stderr, "USAGE: monty file\n");
	}

	list_free(&tok_get);
	stack_free(list);
	free(token);

	if (flg != 0)
	{
		fclose(fp);
	}

	exit(EXIT_FAILURE);
}
