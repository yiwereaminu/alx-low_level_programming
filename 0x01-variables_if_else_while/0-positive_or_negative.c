#include <stdio.h>
#include <time.h>
/**
 * this program checks if the number stored in int n
 * is negative,postive or zero
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() - 200000 / 2;
	if (n >0)
		printf("%d is positive\n", n);
	else if (n <0)
		printf("%d is negative\n", n);
	else
		printf("%d is zero\n", n);
	return (0);
}
