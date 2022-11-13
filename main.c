#include "shell.h"

/**
 * main - main function
 * @ac: arguement count
 * @av: arguement vectr
 * @env: environmental variables
 * Return: 0 on success
 */
int main(int ac, char *av[], char *env[])
{
	char *buf;
	(void)ac;
	(void)av;
	(void)env;

	pass_betty();
	buf = _getline();

	printf("%s\n", buf);
	return (0);
}
