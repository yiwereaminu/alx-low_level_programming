
#include "main.h"

/**
 * _strlen - main entry
 * @s: pointer to the input string
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
