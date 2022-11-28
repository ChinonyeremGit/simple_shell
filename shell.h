#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>

typedef struct env_list
{
	char *env_variable;
	struct env_list *next;
}env_list;

int pass_betty(void);
int _getline(char *cmd, char *args[]);
void _strtok(char *str, const char *delimeter, char *args[]);
void shell(char *av[]);
void _strcpy(char *dest, char *src);
size_t _strlen(char *str);
void display(void);
void ctrl_d(int n);
void ctrl_c(int n);
env_list *add_node_end(env_list **list, char *variable);
char *_strdup(char *str);
env_list *env_linked_list(char *env[]);
void free_env_linked_list(env_list *list);
int _strcmp(char *str1, char *str2);
char *get_env(char *str, env_list *env);
char *c_strdup(char *str, int cs);
void free_double_ptr(char **str);

#endif
