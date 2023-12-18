#ifndef SHELL_H
#define SHELL_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/stat.h>

extern char **environ;
char *_getenv(const char *env_var);
char *get_command(char *command);
char **split_string(char *buffer, char *del);
void free_tokens(char **tokens);
void execute_command(char **args, char **env);
void print_command_not_found(const char *command);
int main(int ac, char **av, char **env);

#endif
