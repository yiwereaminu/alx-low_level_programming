#include <stdio.h>
#include "main.h"

/**
*_strncat - main entry
*this program concatenates two strings
*@dest: a variable that points to the destination string
*@src: a variable that points to the source string
*@n: number of bytes from src to concatenate to destination string
*Return: Always 0.
*/

char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int srcLen = 0;

	while (dest[destLen] != '\0')
		destLen++;

	for (srcLen = 0; srcLen < n && src[srcLen] != '\0'; srcLen++)
	{
		dest[destLen + srcLen] = src[srcLen];
	}
	dest[destLen + srcLen] = '\0';

	return (dest);
}
