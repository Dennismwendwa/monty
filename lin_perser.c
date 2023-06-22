#include "monty.h"

void *_realloc(void *pointer, unsigned int old, unsigned int newp);
/**
 * _realloc - function that allocates mem
 * @newp:- new size
 * @old:- old size
 * @pointer:- ptr to alocate
 * Return:- Always 0
 */

void *_realloc(void *pointer, unsigned int old, unsigned int newp)
{
	unsigned int j = 0;
	void *nw_ptr;

	if (old == newp)
	{
		return (pointer);
	}

	if (pointer != NULL && newp == 0)
	{
		free(pointer);
		return (NULL);
	}

	nw_ptr = malloc(newp);
	if (!nw_ptr)
	{
		return (NULL);
	}

	while (j < old)
	{
		*((char *)nw_ptr + j) = *((char *)pointer + j);
		j++;
	}
	free(pointer);
	return (nw_ptr);
}


/**
 * persing_lin - function that tokens args
 * @lin:- ptr to args
 * Return:- Always 0
 */

char **persing_lin(char *lin)
{
	int loco = 0;
	char *tok, **dobtok;
	int buff_size = BUFFSIZE;

	dobtok = malloc(sizeof(char *) * 3);
	if (dobtok == NULL)
		exit(EXIT_FAILURE);

	tok = strtok(lin, DELIM);
	while (loco < 2)
	{
		dobtok[loco] = tok;
		tok = strtok(NULL, DELIM);
		loco++;
	}

	if (loco >= buff_size)
	{
		buff_size = buff_size + BUFFSIZE;
		dobtok = _realloc(dobtok, BUFFSIZE, buff_size * sizeof(char *));

		if (dobtok == NULL)
		{
			{
				exit(EXIT_FAILURE);
			}
		}
		tok = strtok(NULL, DELIM);
	}

	dobtok[loco] = NULL;

	return (dobtok);
}
