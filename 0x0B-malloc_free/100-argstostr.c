#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * argstostr - concatenates strings in console
 * @ac: numbr of arguments passed
 * @av: pointer to argument
 * Return: s
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int length = 0;
	int i;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length = length + strlen(av[i]) + 1;
	}
	s = malloc(sizeof(char) * length);
	if (s == NULL)
	{
		return (NULL);
	}
	s[0] = '\0';
	for (i = 0; i < ac; i++)
	{
		strcat(s, av[i]);
		strcat(s, "\n");
	}
	s[length - 1] = '\0';
	return (s);
}


