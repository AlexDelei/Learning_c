#include "main.h"

/**
 * print_hexaup - Print number in hexadecimal with uppercase letters
 * @n: Unsigned int
 * Return: Number of characters printed
 */
int print_hexaup(unsigned int n)
{
	int temp, i, count = 0;
	unsigned int num_copy = n;
	char buffer[12];

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	i = 0;
	while (num_copy != 0)
	{
		temp = num_copy % 16;
		if (temp < 10)
		{
			buffer[i] = temp + '0';
		}
		else
		{
			buffer[i] = temp - 10 + 'A';
		}
	num_copy /= 16;
	i++;
	count++;
	}
	for (i = i - 1; i >= 0; i--)
	{
		_putchar(buffer[i]);
	}
	return (count);
}
