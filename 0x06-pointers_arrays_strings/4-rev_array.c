#include <stdio.h>
#include "main.h"

/**
*reverse_array - Entry point
*this program reverses the content of an array
*@a: pointer to the array
*@n: number of elements in array
*Return: Always 0.
*/

void reverse_array(int *a, int n)
{
	int i = 0;
	int j = 0;
	int tmp = 0;

	j = n-1;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[j];
		a[j--] = tmp;
	}
}
