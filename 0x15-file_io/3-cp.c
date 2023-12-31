#include "main.h"
/**
 * main - Entery point
 * @argc: number of element
 * @argv: array of string
 * Return: 0 for success and -1 for failure
*/
int main(int argc, char *argv[])
{
	int r, w, close_r, close_w;
	char buf[1024];
	ssize_t rd;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	r = open(argv[1], O_RDONLY);
	if (r == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((rd = read(r, buf, 1024)) > 0)
	{
		if (w == -1 ||  write(w, buf, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}
	close_r = close(r);
	close_w = close(w);
	if (close_r == -1 || close_w == -1)
	{
		if (close_r == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", r);
		if (close_w == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd  %d\n", w);
		exit(100);
	}
	return (0);
} 
