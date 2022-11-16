#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int pass_betty(void);
char *_getline(void);
char **_strtok(char *str, const char *delimeter);
int shell(char *av[]);

#endif
