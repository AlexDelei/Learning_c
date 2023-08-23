#include "main.h"
/**
 * print_hl - Convert unsigned int to hexadecimal
 * @n: Unsigned int
 * Return: Number of characters printed
 */
int print_hl(uintptr_t n)
{
	char hexadecimalNumber[100];
	int j, temp, i = 0, count = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n != 0)
	{
		temp = n % 16;
		if (temp < 10)
		{
			hexadecimalNumber[i] = temp + '0';
		}
		else
		{
			hexadecimalNumber[i] = temp + 'a' - 10;
		}
	n = n / 16;
	i++;
	}

	for (j = i - 1; j >= 0; j--, count++)
	{
		_putchar(hexadecimalNumber[j]);
	}
	return (count);
}
