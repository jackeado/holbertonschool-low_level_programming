#include <stdio.h>
#include "holberton.h"
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>

/**
 * read_textfile - function that reads a text file and prints
 * @filename: file name
 * @letters: numbers or letters
 *
 * Return: int
 */


ssize_t read_textfile(const char *filename, size_t letters)

{
	char *buffer;
	int fd;
	ssize_t let, len;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer =  malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	let = read(fd, buffer, letters);
	if (let == -1)
	{
		free(buffer);
		return (0);
	}
	len = write(STDOUT_FILENO, buffer, let);
		free(buffer);
	if (len != let)
	{
		return (0);
	}
	close(fd);
	return (let);
}
