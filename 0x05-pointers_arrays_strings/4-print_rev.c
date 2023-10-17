#include "main.h"

/**
 * print_rev - main entry
 *
 * @s: a variable that points to s
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	int len;

	len = 0;
	while (*s != '\0')
	{
		len++;
		s++;
	}
	while (len > 0)
	{
		_putchar(s[len]);
		len--;
	}
}
