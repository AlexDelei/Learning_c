#include "main.h"

/**
 * print_hexalow - Converts unsigned int to lowercase hexadecimal
 * @n: Unsigned int
 * Return: Number of characters printed
 */
int print_hexalow(unsigned int n)
{
	int temp, i, count = 0;
	unsigned int num_copy = n;
	char buffer[12]; /* Max length of unsigned int in hexadecimal + 1*/

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
			buffer[i] = temp - 10 + 'a';
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
