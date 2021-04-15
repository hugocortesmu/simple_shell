#include "shell.h"
/**
 * _receved - creates the child process
 * @receved: double pointer
 * Return: Always 0
 */

int _receved(char **receved)
{
	pid_t pid;

	pid = fork();
	if (pid == 0)
	{
		if ((execve(receved[0], receved, environ) == -1))
		{
			perror("Error");
			return (0);
		}
	}
}
