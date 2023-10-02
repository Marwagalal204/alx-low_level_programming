#include "main.h"
/**
 * main - Entery point
 * @argc: number of element
 * @argv: array of string
 * Return: 0 for success and -1 for failure
*/
int main(int argc, char **argv)
{
	int r, w, rd, wr, close_r, close_w;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		printf("Usage: cp file_from file_to\n");
		exit(97);
	}
	r = open(argv[1], O_RDONLY);
	if (r == -1)
	{
		printf("Error: Can't read from file%s\n", argv[1]);
		exit(98);
	}
	w = open(argv[2], O_CREAT, O_WRONLY, O_TRUNC, 0664);
	rd = read(r, buf, BUFSIZ);
	{
		printf("Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	wr = write(w, buf, rd);
	while (rd > 0)
	{
		if (w == -1 || wr != rd)
		{
			printf("Error: Can't write to %s\n", argv[2]);
			close(r);
			exit(99);
		}
	}
	close_r = close(r);
	if (close_r == -1)
		printf("Error: Can't close fd %d\n", r);
	exit(100);
	close_w = close(w);
	if (close_w == -1)
		printf("Error: Can't close fd %d\n", w);
	exit(100);
	return (0);
}
