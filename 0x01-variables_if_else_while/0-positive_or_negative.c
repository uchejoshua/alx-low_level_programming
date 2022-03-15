#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - this program assign random variable to n when executed
 *
 * Description: this program assigns randoms numbers which positive,
 * Return: 0 when successfully executed
 */
int main(void)
{
		int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);

	return (0);
}
