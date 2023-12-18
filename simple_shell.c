#include "shell.h"
/**
 * main - Entry point for a simple shell program.
 * @ac: Number of arguments.
 * @av: Array of argument strings.
 * @env: Array of environment variable strings.
 *
 * Return: Always 0.
 */

int main(int ac, char **av, char **env)
{
	char **args, *buffer = NULL;
	size_t buffer_size = 0;
	int n_chars;
	(void)ac;
	(void)av;

	while (1)
	{
		if (isatty(fileno(stdin)))
		write(1, "$", 1);

	n_chars = getline(&buffer, &buffer_size, stdin);

	if (n_chars == -1)
		break;

	if (n_chars > 0)
	{
		buffer[n_chars - 1] = '\0';
		args = split_string(buffer, " \t\n");

		if (args && args[0])
		{
		if (strcmp(args[0], "exit") == 0)
		{
			free_tokens(args);
			break;
		}

		else
		{
			execute_command(args, env);
			free_tokens(args);
		}
		}
	}
	}

	free(buffer);
	return (0);
}
