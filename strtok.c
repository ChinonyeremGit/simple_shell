#include "shell.h"

/**
 * delimeter_count - function to count delimeter
 * @str: string to split
 * @delimeter: delimeter, where to split the string
 * Return: number of delimeter
 */
int delimeter_count(char *str, const char *delimeter)
{
	int n_delimeter = 0, i = 0;

	while (str[i])
	{
		if (str[i] == *delimeter)
			n_delimeter++;
		i++;
	}
	return (n_delimeter);
}

/**
 * _strtok - functin to split line
 * @str: string to split
 * @delimeter: delimeter, where to split the string
 * @args: parameters
 * Return: pointer to strings
 */
void _strtok(char *str, const char *delimeter, char *args[])
{
	char *piece;
	int i = 0;

	piece = strtok(str, delimeter);
	while (piece != NULL)
	{
		args[i++] = _strdup(piece);
		piece = strtok(NULL, delimeter);
	}
	args[i] = NULL;
}
