#include <stdio.h>

/**
 * main-entry point
 *
 * Description: prints all possible combinations
 *of two two-digit numbers.
 * Return: 0 when executed successfully
 */
int main(void)
{
	int ifirst, i, jfirst, j;

	for (ifirst = '0'; ifirst <= '9'; ifirst++)
	{
		for (i = '0'; i <= '9'; i++)
		{
			j = i + 1;
			jfirst = ifirst;
			for (; jfirst <= '9'; jfirst++)
			{
				for (; j <= '9'; j++)
				{
					putchar(ifirst);
					putchar(i);
					putchar(' ');
					putchar(jfirst);
					putchar(j);
					if (ifirst != '9' || jfirst != '9' || i != '8' || j != '9')
					{
						putchar(',');
						putchar(' ');
					}
				}
				j = 48;
			}
		}
	}
	putchar('\n');
	return (0);
}

