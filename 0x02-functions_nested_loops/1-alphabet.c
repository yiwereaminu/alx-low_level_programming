#include "main.h"
/**
 * print_alphabet - Entry point
 *
 * this program print the alphabets all in lovwecase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);
	_putchar('\n');
}
