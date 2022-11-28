#include "shell.h"

/**
 * _getline - function to getline from stdin
 * @cmd: argument to execute
 * @args: pointer to strings of parameters
 * Return: n_getline
 */
int _getline(char *cmd, char *args[])
{
	char *buf = NULL;
	size_t buf_size = 10;
	int n_getline;

	buf = malloc(buf_size * sizeof(char));
	if (buf == NULL)
		perror("malloc error");
	n_getline = getline(&buf, &buf_size, stdin);
	if (n_getline == -1)
	{
		free(buf);
		return (n_getline);
	}
	if (n_getline > 0)
	{
		buf[n_getline - 1] = '\0';
	}
	_strtok(buf, " ", args);
	_strcpy(cmd, args[0]);

	free(buf);
	return (n_getline);
}

