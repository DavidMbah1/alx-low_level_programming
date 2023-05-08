#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: This is the number of letters
 * the function should read and print.
 * Return: If the function fails or filename is NULL - 0.
 * O/w - this is the actual number of bytes the
 * function can read and print.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t a, b, c;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	a = open(filename, O_RDONLY);
	b = read(a, buf, letters);
	c = write(STDOUT_FILENO, buf, b);

	if (a == -1 || b == -1 || c == -1 || c != r)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(a);

	return (c);


}
