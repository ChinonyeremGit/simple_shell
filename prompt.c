#include "shell.h"

/**
 * shell - my shell
 * @av: string to receive command line arguements
 * Return: always 0
 */
int shell(char *av[])
{
	char *buf = NULL, **args;
	const char delimeter = 32;
	pid_t fork_id;
	int factor = 1;

	while (factor)
	{
		printf("#cisfun$ ");
		buf = _getline();
		if (buf == NULL)
		{
			factor = 0;
			continue;
		}
		args = _strtok(buf, &delimeter);
		fork_id = fork();
		if (fork_id  == 0)
		{
			if (execve(args[0], args, NULL) == -1)
				printf("%s: No such file or directory\n", av[0]);
		}
		else
			wait(NULL);
	}
	putchar(10); /* newline */
	return (0);
}
