#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 *main - compy from file to another.
 *@argv[]: The path to the file to read.
 *@argc: the number of argument file.
 *
 *Return: The number of characters actually read and written to strd output
 *or 0 if an error occurred.
 */
int main(int argc, char *argv[])
{
	int fd_from;
	char *str;
	int fd_to;
	ssize_t from_len;
	ssize_t to_write;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_toi\n");
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	str = malloc(1024);
	if (str == NULL)
	{
		free(str);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
	
	while ((from_len = read(fd_from, str, 1024)) > 0)
	{
		to_write = write(fd_to, str, from_len);
		if (to_write != from_len)
		{
			free(str);
			close(fd_from);
			close(fd_to);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (from_len == -1)
	{
		close(fd_from);
		close(fd_to);
		free(str);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (close(fd_from) == -1)
	{
		free(str);
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_from);
		exit(100);
	}
	if (close(fd_to) == -1)
	{
		free(str);
		dprintf(STDERR_FILENO, "Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

