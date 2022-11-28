#include "shell.h"

/**
 * _strdup - function to duplicate a string
 * @str: string to duplicate
 * Return: duplicated string
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *duplicate;

	len = _strlen(str);
	len++;
	duplicate = malloc(len * sizeof(char));
	if (duplicate == NULL)
		return (NULL);
	while (i < len)
	{
		*(duplicate + i) = *(str + i);
		i++;
	}
	return (duplicate);
}

