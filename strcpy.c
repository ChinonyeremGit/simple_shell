#include "shell.h"

/**
 * _strcpy - function to copy from one string to another
 * @dest: destination to copy string to
 * @src: where to copy string from
 */
void _strcpy(char *dest, char *src)
{
	size_t src_len, i;

	src_len = _strlen(src);
	if (src_len == 0)
		return;
	for (i = 0; i < src_len; i++)
		dest[i] = src[i];
	dest[i] = '\0';
}
