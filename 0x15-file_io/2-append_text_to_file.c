#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
/**
 * append_text_to_file - creates a file and puts text to it
 * with 600 perms (do not change if it exists)
 * @filename: name for file
 * @text_content: text to put in file
 * Return: on success 1, on failure -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file;
	ssize_t length, inlen;
	char *ptr;

	if (filename == NULL)
	{
		return (-1);
	}

	file = open(filename, O_WRONLY | O_APPEND);
	if (file == -1)
	{
		return (-1);
	}

	for (inlen = 0, ptr = text_content; *ptr; ptr++)
	{
		inlen++;
	}
	length = write(file, text_content, inlen);

	if (close(file) == -1 || inlen != length)
	{
		return (-1);
	}
	return (length);
}
