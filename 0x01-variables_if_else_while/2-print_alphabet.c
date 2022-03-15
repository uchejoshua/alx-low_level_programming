#include <stdio.h>

/**
 * main - returns all alphabets in lowercase
 * Return: 0 if executed successfully
 */
int main(void)
{
	int alpha = 97;

	while (alpha <= 122)
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}