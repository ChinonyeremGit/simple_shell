#include "shell.h"

/**
 * _strlen - function to calculate strlen
 * @str: string
 * Return: string length
 */
size_t _strlen(char *str)
{
	size_t len = 0;
	

	while (*str++)
		len++;
	return (len);
}
