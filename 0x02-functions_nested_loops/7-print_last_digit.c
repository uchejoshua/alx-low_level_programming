#include "main.h"


/**
 *_abs - prints the absolute value
 *@c: only parameter
 *Return: positive absolute value
 */

int _abs(int c)
{
	return (c >= 0 ? c : -(c));
}

/**
 * print_last_digit - this prints the last digit of a number
 * @r: only operand
 * Return: last digit of number
 */
int print_last_digit(int r)
{
	int lastDigit;

	lastDigit = _abs((r % 10));
	_putchar('0' + lastDigit);

	return (lastDigit);
}

