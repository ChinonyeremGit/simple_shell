#include "shell.h"

/**
 * add_node_end - function to add node at the end of a list
 * @head: linked list to add new node
 * @variable: environmental variable to add to node
 * Return: limked list
 */
env_list *add_node_end(env_list **head, char *variable)
{
	env_list *temp, *new;

	if (head == NULL || variable == NULL)
		return (NULL); /* to check that there's a list and variable*/
	new = malloc(sizeof(env_list));
	if (new == NULL)
		return (NULL);
	new->env_variable = _strdup(variable);
	new->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = new;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
