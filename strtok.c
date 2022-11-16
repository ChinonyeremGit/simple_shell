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
 * Return: pointer to strings
 */
char **_strtok(char *str, const char *delimeter)
{
	char *piece;
	static char *args[10];
	int i = 0;

	piece = strtok(str, delimeter);
	args[i++] = piece;
	while (piece != NULL)
	{
		piece = strtok(NULL, delimeter);
		args[i++] = piece;
	}
	args[i] = NULL;
	return (args);
}
