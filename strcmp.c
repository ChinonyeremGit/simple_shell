#include "shell.h"

/**
 * _strcmp - function to compare two strings
 * @str1: first string
 * @str2: second string
 * Return: 0 if same
 */
int _strcmp(char *str1, char *str2)
{
	int len, i;

	if (_strlen(str1) != _strlen(str2))
		return (1);
	len = _strlen(str1);
	for (i = 0; i < len; i++)
	{
		if (*(str1 + i) != *(str2 + i))
			return (1);
	}
	return (0);
}
