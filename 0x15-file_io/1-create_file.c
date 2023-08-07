#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
* create_file - creates a file
* @filename: name of file
* @text_content: string with content of the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int fd, rd, wr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
	for (rd = 0; *(text_content + rd);)
	rd++;

		wr = write(fd, text_content, rd);
		if (wr != rd)
	{
		close(fd);
		return (-1);
	}
	}
	close(fd);
	return (1);
}
