#include "main.h"

/**
 * read_textfile - Function which will read and print output
 * @filename: pointer to the filename chosen
 * @letters: size of the buffer
 * Return: -1, 0 or ecrire
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	char *buffer;
	ssize_t lire;
	ssize_t ecrire;

	if (filename == NULL)
		return (0);
	i = open(filename, O_RDONLY);
	if (i == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(i);
		return (0);
	}
	lire = read(i, buffer, letters);
	if (lire == -1)
	{
		free(buffer);
		close(i);
		return (0);
	}
	ecrire = write(STDOUT_FILENO, buffer, lire);
	if (ecrire == -1 || ecrire != lire)
	{
		free(buffer);
		close(i);
		return (0);
	}
	free(buffer);
	close(i);
	return (ecrire);
}
