#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * append_text_to_file - function that appends text at the end of a file
 * @filename: file name
 * @text_content: content text
 *
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int wtf = 0;
	int df = 0;
	ssize_t i = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	df = open(filename, O_RDWR | O_APPEND);
	if (text_content == NULL)
	{
		return (1);
	}
	else if (df == -1)
	{
		return (-1);
	}
	if (text_content != '\0')
	{
		while (text_content[i] != '\0')
			i++;
	}
	wtf = write(df, text_content, i);
	if (wtf == -1 || wtf != i)
	{
		return (-1);
	}
	return (1);
}
