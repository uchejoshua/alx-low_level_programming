#include "main.h"

/**
 * print_sign - prints +1 or 0 or -1
 * @n: only operand
 * Return: 1 as positive, 0 as zero and -1 as negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

