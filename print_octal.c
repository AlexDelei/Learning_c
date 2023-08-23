#include "main.h"
/**
 * print_octal - prints to base 8
 * @n: number
 * Return: total count
 */
int print_octal(unsigned int n)
{
        int i, count = 0;
        unsigned int num_copy = n;
        char buffer[12]; /* Max length of unsigned int in octal + 1*/

        if (n == 0)
        {
                _putchar('0');
                return (1);
        }
        i = 0;
        while (num_copy != 0)
        {
                buffer[i] = num_copy % 8 + '0';
                num_copy /= 8;
                i++;
                count++;
        }
        for (i = i - 1; i >= 0; i--)
        {
                _putchar(buffer[i]);
        }
        return (count);
}