#include "shell.h"

/**
 * ctrl_d - function to handle control D
 * @n: number returned by getline if ctrl_d
 */
void ctrl_d(int n)
{
	if (n == -1)
	{
		write(1, "\n", 1);
		exit(0);
	}
}

/**
 * ctrl_c - function to ignore control C
 * @n: sig int
 */
void ctrl_c(int n)
{
	(void)n;
	write(1, "\n#cisfun$ ", 10);
}
