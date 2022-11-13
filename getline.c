#include "shell.h"

/**
 * _getline - function to getline from stdin
 * Return: pointer to line
 */
char *_getline(void)
{
	char *buf;
	size_t buf_size = 10;
	int n_getline;

	buf = malloc(buf_size * sizeof(char));
	if (buf == NULL)
		return (NULL);
	n_getline = getline(&buf, &buf_size, stdin);
	if (n_getline < 0)
		return (NULL);
	buf[n_getline - 1] = '\0';
	return (buf);
}

