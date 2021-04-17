#ifndef _SHELL_H
#define _SHELL_H

#include <stdio.h>
#include <unistd.h> /*write library */
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>


extern char **environ;
unsigned int counter_words(char *str);
void tokenizer(char *tok);
int _receved(char **receved);

#endif /* SHELL_H */
