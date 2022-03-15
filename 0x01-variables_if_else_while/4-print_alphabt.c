#include <stdio.h>
/**
 * main - prints alphabets except e and q
 * Return: 0 executed successfully
 */


int main(void)
{
	int alpha;

	for (alpha = 97; alpha <= 122; alpha++)
	{
		if (alpha == 101)
			continue;
		else if (alpha == 113)
			continue;
		else
			putchar(alpha);
	}
	putchar('\n');

	return (0);
}
