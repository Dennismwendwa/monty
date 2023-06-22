#include "monty.h"

#include <fcntl.h>
#include <ctype.h>

/**
 * adding_nod - adding nod
 * @string:- start of stack
 * Return:- Alway 0
 */

void adding_nod(char *string)
{
	used_m *nw;

	nw = malloc(sizeof(used_m));
	if (nw == NULL)
	{
		exit(EXIT_FAILURE);
	}

	nw->data = string;
	nw->next = tok_get;
	tok_get = nw;
}

/**
 * freeing_lst - freeing lists
 * @head:- start of the list
 * Return:- Always 0
 */

void freeing_lst(used_m **head)
{
	used_m *nw;
	unsigned int l = 0;

	if (*head)
	{
		while (*head)
		{
			nw = *head;
			*head = (*head)->next;
			if (nw->data != NULL)
			{
				free(nw->data);
			}
			free(nw);
			l++;
		}
	}
}



/**
 * main - entry point
 * @argc:- args count
 * @argv: ptr to args
 * Return:- always 0
 */

int main(int argc, char **argv)
{
	ssize_t l = 0, h = 1;
	size_t buffsiz = 1024;
	unsigned int cont = 1;
	char *lin = NULL;
	void (*func)(stack_t **, unsigned int);

	fp = NULL;
	if (argc != 2)
		error_handle(0, cont, argv[1]);
	fp = fopen(argv[1], "r");
	if (fp == NULL)
		error_handle(2, cont, argv[1]);
	tokens = NULL;
	while (h == 1)
	{
		lin = NULL;
		l = getline(&lin, &buffsiz, fp);
		adding_nod(lin);
		if (l != -1 && lin[0] == '#')
		{
			cont++;
			continue;
		}
		if (l != -1)
		{
			tokens = persing_lin(lin);
			func = gett_op(tokens[0], cont);
			if (tokens[0])
				push_chck(tokens, cont);
			func(&list, cont), free(tokens);
		}
		else
			h = 0;
		cont++;
	}
	fclose(fp);
	freeing_lst(&tok_get), stack_free(list);
	return (0);
}
