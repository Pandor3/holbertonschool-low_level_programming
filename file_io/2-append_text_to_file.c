#include "main.h"

/**
 * append_text_to_file - function which appends text at the end of file
 * @filename: name of the chose file
 * @text_content: content of the file
 * Return: -1 or 1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int i;
	int ecrire;
	int len;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_WRONLY | O_APPEND);
	if (i == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(i);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
	{
	}
	ecrire = write(i, text_content, len);
	close(i);
	if (ecrire == -1 || ecrire != len)
		return (-1);
	return (1);
}
