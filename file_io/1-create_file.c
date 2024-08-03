#include "main.h"

/**
 * create_file - function which will create a file
 * @filename: name of the chosen file
 * @text_content: content of the file
 * Return: -1 or 1
 */

int create_file(const char *filename, char *text_content)
{
	int i;
	int ecrire;
	int len;

	if (filename == NULL)
		return (-1);
	i = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
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
	if (ecrire == -1 || ecrire != len)
	{
		close(i);
		return (-1);
	}
	return (1);
}
