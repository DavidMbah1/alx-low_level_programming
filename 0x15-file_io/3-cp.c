#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * check97 - function checks for the correct number of arguments
 * @argc: these rae the number of arguments
 * Return: void
 */


void check97(int argc)
{
	if (argc != 3)
{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}



/**
 * check98 - func checks that file_from exists and can be read
 * @check: this checks if true of false
 * @file: this is thefile_from name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 * Return: void
 */



void check98(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(98);
	}

}



/**
 * check99 - function checks that file_to was
 * created and/or can be written to
 * @check: this checks if true of false
 * @file: this is the file_to name
 * @fd_from: file descriptor of file_from, or -1
 * @fd_to: file descriptor of file_to, or -1
 * Return: void
 */


void check99(ssize_t check, char *file, int fd_from, int fd_to)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (fd_from != -1)
			close(fd_from);
		if (fd_to != -1)
			close(fd_to);
		exit(99);
	}

}



/**
 * check100 -func checks that file descriptors were closed properly
 * @check: this checks if true or false
 * @fd: this is the file descriptor
 * Return: void
 */



void check100(int check, int fd)
{
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}



/**
 * main - func opies the content of a file to another file.
 * @argc: this is the number of arguments passed
 * @argv: this is the array of pointers to the arguments
 * Return: 0 on success
 */


int main(int argc, char *argv[])
{
	int fed_from, fed_to, close_to, close_from;
	ssize_t lentr, lentw;
	char buffer[1024];
	mode_t file_perm;

	check97(argc);
	fed_from = open(argv[1], O_RDONLY);
	check98((ssize_t)fed_from, argv[1], -1, -1);
	file_perm = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	fed_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, file_perm);
	check99((ssize_t)fed_to, argv[2], fed_from, -1);
	lentr = 1024;
	while (lentr == 1024)
	{
		lentr = read(fed_from, buffer, 1024);
		check98(lentr, argv[1], fed_from, fed_to);
		lentw = write(fed_to, buffer, lentr);
		if (lentw != lentr)
			lentw = -1;
		check99(lentw, argv[2], fed_from, fed_to);
	}
	close_to = close(fed_to);
	close_from = close(fed_from);
	check100(close_to, fed_to);
	check100(close_from, fed_from);
	return (0);


}
