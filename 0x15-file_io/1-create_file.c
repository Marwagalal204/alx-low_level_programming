#include "main.h"

/**
 * create_file - a function that creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	ssize_t len, w, o;

	if (filename == NULL)
		return (-1);

	o = open(filename, O_CREAT |  O_RDWR | O_TRUNC | O_EXCL, 0600);
	if (o == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(o, text_content, len);
	}
	if (w == -1)
		return (-1);

	close(o);

	return (1);
}
