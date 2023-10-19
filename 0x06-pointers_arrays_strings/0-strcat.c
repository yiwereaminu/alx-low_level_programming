#include <stdio.h>
#include "main.h"

/**
*_strcat - main entry
*this program concatenates two strings
*@dest: a variable that points to the destination string
*@src: a variable that points to the source string
*Return: Always 0.
*/

char *_strcat(char *dest, char *src)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	while (src[srcLen] != '\0')
	{
		dest[destLen] = src[srcLen];
		destLen++;
		srcLen++;
	}
	dest[destLen] = '\0';

	return (dest);
}
