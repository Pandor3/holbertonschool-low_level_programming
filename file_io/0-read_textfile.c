#include "main.h"



ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	unsigned int count;

	if (filename == NULL)
		return (0);
	i = open(*filename, O_RDONLY);
	if (count == -1)
		return (0);
	for (count = 0; count != filename; count ++)
	{
	}
	close (i);
	return (count);
}
