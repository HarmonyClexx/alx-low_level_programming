#include <stdio.h>
#include <string.h>

/**
 * main - prints its name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */
int main(int argc, char *argv[])
{
	char *program_name = strrchr(argv[0], '/');
	if (program_name == NULL)
	{
		program_name = argv[0];
	}
	else
	{
		program_name++;
	}
	printf("%s\n", program_name);
	return 0;
}

