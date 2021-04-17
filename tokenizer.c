#include "shell.h"

/**
 * tokenizer - funtion
 * @tok: string
 * Return: Always 0
 */

void tokenizer(char *tok)
{
	char **tokens = NULL;
	int i = 0;
	char *aux = NULL;

	tokens = malloc((counter_words(tok) + 1) * sizeof(char *));
	while (*(tokens + i))
	{
		aux = strtok(tok, " ");
		tokens[i] = aux;
		i++;
	}
	tokens[i] = '\0';
	_receved(tokens);
	free(tokens);
}
