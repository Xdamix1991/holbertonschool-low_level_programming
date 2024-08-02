#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - add text to end of a file.
 * @filename: The name of the file to be created.
 * @text_content: A NULL-terminated string to write to the file.
 * Return: 1 on file exists, -1 if file does not exist.
 */
int append_text_to_file(const char *filename, char *text_content)

{
	int fd;
	ssize_t file_len;
	ssize_t write_file;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[file_len] != '\0')
		{
			file_len++;
		}
		write_file = write(fd, text_content, file_len);
		if (write_file != -1 || write_file != file_len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

