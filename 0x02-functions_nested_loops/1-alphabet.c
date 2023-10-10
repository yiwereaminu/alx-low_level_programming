#include "main.h"
/**
 * main - check the code
 *
 * this program print the alphabets all in lovwecase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	void print_alphabet(void)
	{
		char letter;
		for (letter = 'a'; letter <= 'z'; letter++)
		       _putchar(letter);
		_putchar('\n');
	}
	print_alphabet();
	return (0);	
}
