#include <stdio.h>
/**
 * main - prints lowercase alphabets in reverse
 * Return: 0 when executed succesfully
 */


int main(void)
{
	int alpha = 122;

	for (alpha = 122; alpha >= 97; alpha--)
	{
		putchar(alpha);
	}
	putchar('\n');

	return (0);
}