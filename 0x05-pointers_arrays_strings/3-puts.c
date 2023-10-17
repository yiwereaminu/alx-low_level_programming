#include "main.h"

/**
 * _puts - main entry
 * @str: variable that points to a string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	if (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	else if (*str == '\0')
	{
		_putchar('\n');
	}
}
