#include "main.h"

/**
* _puts_recursion - prints a string followed by a new line.
* @s: variable that points to a string
*
*/

void _puts_recursion(char *s)
{
	if ((*s >= 'a' && *s <= 'z') || (*s >= 'A' && *s <= 'Z'))
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
		_putchar('\n');
	}
}
