#include "main.h"
/**
 *print_rev - print string in reverse
 *@s: string pointer
 *Return: counter
 */
int print_rev(char *s)
{
        int j, len = 0;
        int count = 0;

        while (s[len] != '\0')
        {
                len++;
        }

        for (j = len - 1; j >= 0; j--)
        {
                putchar(s[j]);
                count++;
        }

        return (count);
}