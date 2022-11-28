#include "shell.h"

/**
 * shell - function to run my custom shell
 * @env: environmental variables
 */
void shell(char *env[])
{
	env_list *linked_env;
	char cmd[100], *args[20], *_shell, *error;
	int n_execve, ctrl_d_n;

	linked_env = env_linked_list(env);
	_shell = get_env("_", linked_env);
	error = ": No such file or directory\n";
	while (1)
	{
		display();
		signal(SIGINT, ctrl_c);
		ctrl_d_n = _getline(cmd, args);
		if (ctrl_d_n == -1)
		{
			free(_shell);
			free_env_linked_list(linked_env);
		}
		ctrl_d(ctrl_d_n);
		if (_strcmp(cmd, "exit") == 0)
		{
			free_double_ptr(args);
			free(_shell);
			free_env_linked_list(linked_env);	
			exit(0);
		}
		if (fork() != 0)
			wait(NULL);
		else
		{
			n_execve = execve(cmd, args, NULL);
			if (n_execve == -1)
			{
				write(1, _shell, _strlen(_shell));
				write(1, error, _strlen(error));
			}
		}
	}
}
