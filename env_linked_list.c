#include "shell.h"

/**
 * env_linked_list - function to store env in a linked list
 * @env: the environmental variables
 * Return: linked list
 */
env_list *env_linked_list(char *env[])
{
	env_list *head;
	int i = 0;

	head = NULL;
	while (env[i] != NULL)
	{
		add_node_end(&head, env[i]);
		i++;
	}
	return (head);
}

/**
 * free_env_linked_list - function to free list
 * @list: linked list
 */
void free_env_linked_list(env_list *list)
{
	env_list *temp;

	while (list != NULL)
	{
		temp = list;
		list = list->next;
		free(temp->env_variable);
		free(temp);
	}
}
