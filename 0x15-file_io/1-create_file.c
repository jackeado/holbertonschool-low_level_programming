#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_file - function that creates a file
 * @filename: file name
 * @text_content: content file
 *
 * Return: int
 */

int create_file(const char *filename, char *text_content)

{
	int wtf = 0;
	int fd = 0;
	ssize_t i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
	}
	wtf = write(fd, text_content, i);
	if ((wtf == -1) || wtf != i)
	{
		return (-1);
	}
	return (1);
}
