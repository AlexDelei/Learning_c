#include "main.h"

/**
 * print_number - Printing numbers
 * @n: Number to print
 * Return: Number of characters printed
 */
int print_number(int n)
{
        char buffer[12]; /*Buffer to store the number as a string*/
        int i, digit,  count = 0;

        if (n < 0)
        {
                _putchar('-');
                count++;
        }
        else if (n == 0)
        {
                _putchar('0');
                count++;
        }
        i = 0;
        while (n != 0)
        {
                digit = n % 10;
                buffer[i] = (digit < 0) ? -digit + '0' : digit + '0';
                n /= 10;
                i++;
        }
        /*Print the digits in reverse order*/
        for (i = i - 1; i >= 0; i--)
        {
                _putchar(buffer[i]);
                count++;
        }

        return (count);
}