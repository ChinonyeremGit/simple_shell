#include "shell.h"

/**
 * display - function to type prompt
 */
void display(void)
{
	/*static int first_time = 1;*/
	char *str = "#cisfun$ ";

	/*if (first_time)
	{
		const char *CLEAR_SCREEN_ANSI = "\033[1;1H\033[2J";

		write(1, CLEAR_SCREEN_ANSI, 12);
		first_time = 0;
	}*/
	write(1, str, _strlen(str));
}
