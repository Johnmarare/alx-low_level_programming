#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _realloc - dynamically allocates memory
 * @ptr: pointer to allocated memory using malloc(old_memory)
 * @old_size: memory size with previous memory address
 * @new_size: memory size with new memory address.
 * Return: - when new_size == old_size, returns *ptr
 *	   - a pointer to the memory allocated
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *temp;
	void *ptr_cpy;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		temp = malloc(new_size);
		if (temp == NULL)
		{
			return (NULL);
		}
		return (temp);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	ptr_cpy = ptr;

	temp = malloc(new_size);
	if (temp == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < old_size && i < new_size; i++)
	{
		((char *)temp)[i] = ((char *)ptr_cpy)[i];
	}
	free(ptr);
	return (temp);
}
