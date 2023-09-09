#include "main.h"
void execute_command(const char *command)
{
	char *args[32];
	char *token = strtok((char *)command, " \t\n");
	int argCount = 0;

	while (token != NULL && argCount < 31)
	{
		args[argCount] = token;
		argCount++;
		token = strtok(NULL, " \t\n");
	}
	args[argCount] = NULL;
	/*Check if the command contains a path (e.g., "/bin/ls")*/
	if (strchr(args[0], '/') != NULL)
	{
		if (execve(args[0], args, NULL) == -1)
		{
			perror(args[0]);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		/*Get the PATH environment variable*/
		char *path = getenv("PATH");
		if (path == NULL)
		{
			path = "/bin:/usr/bin"; /*Default PATH if not set*/
		}
		/*Search for the executable in the directories listed in PATH*/
		char *path_to_exec = search_path(args[0], path);
		if (path_to_exec != NULL)
		{
			if (execve(path_to_exec, args, NULL) == -1)
			{
				perror(args[0]);
				free(path_to_exec);
				exit(EXIT_FAILURE);
			}
			free(path_to_exec);
		}
		else
		{
			fprintf(stderr, "%s: command not found\n", args[0]);
			exit(EXIT_FAILURE);
		}
	}
}
