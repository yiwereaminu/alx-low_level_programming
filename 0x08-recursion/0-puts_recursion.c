#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line.
* @s: variable that points to a string
*
*/

void _puts_recursion(char *s)
{
	if (*s =='\0')
	{
		_putchar('\n');
		return;
	}
	else if (*s == ',' || *s == ' ' || *s == '.' || *s == '?')
		_putchar(*s);
	else
	{
		_putchar(*s);
	}
	_puts_recursion(s + 1);
}
