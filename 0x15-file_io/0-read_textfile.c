#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
/**
 * read_textfile - prints text from a file
 * @filename: name of file
 * @letters: numbers of characters to read.
 * Return: numbers of letters read, 0 if EOF
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	int length, wc;
	char *buff;

	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}
	file = open(filename, O_RDONLY);
	if (file == -1)
	{
		free(buff);
		return (0);
	}
	length = read(file, buff, letters);
	if (length == -1)
	{
		free(buff);
		close(file);
		return (0);
	}
	wc = write(STDOUT_FILENO, buff, length);

	free(buff);
	close(file);
	if (wc != length)
	{
		return (0);
	}
	return (length);
}
