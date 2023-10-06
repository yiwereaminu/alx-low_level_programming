#include <stdio.h>
/**
 * this program checks if the number stored in int n
 * is negative,postive or zero
 */
int main(void)
{
	int n;
	if (n >0)
		printf("%d\n: is positive", n);
	else if (n <0)
		printf("%d\n: is negative", n);
	else
		printf("%d\n: is zero", n);
	return (0);
}
