#include "main.h"
/**
 * print_S - print string, handling non-printable characters
 * @s: string pointer
 * Return: number of characters printed
 */
int print_S(char *s)
{
	int count = 0;
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] < 32 || s[i] >= 127)
		{
			count += _puts("\\x");
			count += _putchar("0123456789ABCDEF"[s[i] >> 4]);
			count += _putchar("0123456789ABCDEF"[s[i] & 0x0F]);
		}
		else
		{
			count += putchar(s[i]);
		}
	}
	return (count);
}
