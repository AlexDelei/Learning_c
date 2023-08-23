#include "main.h"

/**
 * print_unsig - Print unsigned numbers
 * @n: Number to print
 * Return: Number of characters printed
 */
int print_unsig(unsigned int n)
{
        char buffer[12]; /* Max length of unsigned int in decimal + 1 */
        int count = 0;
        int i, index = 0;

        if (n == 0)
        {
                _putchar('0');
                return (1);
        }

        while (n > 0)
        {
                buffer[index++] = (n % 10) + '0';
                n /= 10;
                count++;
        }

        for (i = index - 1; i >= 0; i--)
        {
                _putchar(buffer[i]);
        }

        return (count);
}