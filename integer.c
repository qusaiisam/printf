#include "main.h"

/**
 * printf_integer - prints intiger number
 * @args: number arguements
 * @printed: the printed characters
 * Return: printed charcaters
 */

int printf_integer(va_list args, int printed)
{
	int n = va_arg(args, int);
	int s = 0;
	int t = n;
	int d;

	if (n < 0)
	{
		printed += _putchar('-');
		n = -n;

		t = n;
	}

	do {
		s++;
		t /= 10;
	} while (t != 0);

	while (s > 0)
	{
		int p10 = 1;
		int i;

		for (i = 1; i < s; i++)
		{
			p10 *= 10;
		}
		d = n / p10;
		printed += _putchar(d + '0');
		n -= d * p10;
		s--;
	}
	return (printed);
}
