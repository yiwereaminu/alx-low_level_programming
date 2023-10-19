#include <stdio.h>
#include "main.h"

/**
*_strncpy - Entry point
*@dest: a variaable that points to the destinatination stsring
*@src: variable that points to the src string
*@n: a variable that stores number of char to cpy to dest
*Return: Always 0.
*/

char *_strncpy(char *dest, char *src, int n)
{
	int srcLen = 0;

	for (srcLen = 0; srcLen < n && src[srcLen] != '\0'; srcLen++)
		dest[srcLen] = src[srcLen];
	for ( ; srcLen < n; srcLen++)
		dest[srcLen] = '\0';
	return (dest);
}
