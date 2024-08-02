#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 *read_textfile - Reads the content of a file and writes it to standard output.
 *@filename: The path to the file to read.
 *@letters: The maximum number of letters to read.
 *
 *Return: The number of characters actually read and written to strd output
 *or 0 if an error occurred.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *str;
	int file_len;
	int whrite_file;

	if (filename == NULL && letters == 0) /** checks if file is NULL */
		return (0);
	str = malloc(sizeof(char) * letters); /** allocate and stock memory for str */
	if (str == NULL)
		return (0);
	fd = open(filename, O_RDONLY); /** open the file in read-only mode */
	if (fd == -1)
	{
		free(str);
		close(fd);
		return (0);
	}
	file_len = read(fd, str, letters); /** Read the file */
	if (file_len == -1)
	{
		free(str);
		close(fd);
		return (0);
	}
	whrite_file = write(STDOUT_FILENO, str, letters); /** Write to strd output */
	if (whrite_file == -1 || whrite_file != file_len)
	{
		free(str);
		close(fd);
		return (0);
	}
	free(str); /** free and close the file */
	close(fd);
	return (file_len);
}

