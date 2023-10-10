#include "main.h"

/**
 * print_alphabet_x10 - main Entry
 * prints the alphabets from a-z 10 times
 * Return: Always 0 (Success)
 */
void print_aphabet_x10(void)
{
	int i = 0;
	char letter;

	while (i < 10)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
		i++;
	}
}
