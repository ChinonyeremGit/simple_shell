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
	(void)ac;
	(void)av;

	shell(env);
	return (0);
}
