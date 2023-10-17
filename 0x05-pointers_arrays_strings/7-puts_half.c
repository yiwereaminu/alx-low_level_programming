#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int len, i, halflen;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	halflen = len / 2;
	for (i = halflen; halflen < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
