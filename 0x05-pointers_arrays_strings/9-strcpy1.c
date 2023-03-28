#include "main.h"
/**
 * _strcpy - copies source to destination
 * @dest: destination.
 * @src: source
 * Return: destination.
 */

char *_strcpy(char *dest, char *src)
{
	char *return_ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (return_ptr);

}
