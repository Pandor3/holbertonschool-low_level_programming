#include "main.h"

/**
 * error_exit - function which prints errors
 * @quitte: code for error exit
 * @tell: message for exit error
 * @filename: name of the chosen file
 */

void error_exit(int quitte, const char *tell, const char *filename)
{
	dprintf(STDERR_FILENO, tell, filename);
	exit(quitte);
}


/**
 * main - function which copies content into another file
 * @argc: number of arguments
 * @argv: list of arguments
 * Return: 0 or exit
 */


int main(int argc, char **argv)
{
	int from;
	int to;
	ssize_t lire;
	char buffer[1024];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", "");
	from = open(argv[1], O_RDONLY);
	if (from == -1)
		error_exit(98, "Error: cannot read from %s file\n", argv[1]);
	to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (to == -1)
		error_exit(99, "Error: cannot write to %s file\n", argv[2]);
	while ((lire = read(from, buffer, 1024)) > 0)
	{
		if (write(to, buffer, lire) != lire)
			error_exit(99, "Error: cannot write to %s file\n", argv[2]);
	}
	if (lire == -1)
		error_exit(98, "Error: cannot read from %s file\n", argv[1]);
	if (close(from) == -1)
		error_exit(100, "Error: cannot close fd %d\n", argv[1]);
	if (close(to) == -1)
		error_exit(100, "Error: cannot close fd %d\n", argv[2]);
	return (0);
}
