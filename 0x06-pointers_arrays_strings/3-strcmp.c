#include <stdio.h>
#include "main.h"

/**
*_strcmp - Entry Point
*@s1: variaable that points to str 1
*@s2: variable that points to str 2
*this program compare two string
*Return: Always 0.
*/

int _strcmp(char *s1, char *s2)
{
	int sum1 = 0;
	int sum2 = 0;
	int i = 0;
	int j = 0;

	for (i = 0; s1[i] != '\0'; i++)
		sum1 = s1[i] + '0';
	for (j = 0; s2[j] != '\0'; j++)
		sum2 = s2[j] + '0';
	if (sum1 == sum2)
		return (0);
	else if (sum1 > sum2)
		return (1);
	else
		return (-1);
}
