#include "main.h"
/**
 * print_bigS - Print non-printable characters
 * (0 < ASCII value < 32 or >= 127) in the format \x followed by
 * the ASCII code value in hexadecimal (uppercase - always 2 characters)
 * @l: va_list arguments from _printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to _printf
 * Return: Number of characters printed
 */
<<<<<<< HEAD
<<<<<<< HEAD
=======
int print_bigS(char *)
>>>>>>> print
=======
int print_bigS(char *)
>>>>>>> print
{
	int i, count = 0;
	char *s;
	va_list l;

	s = va_arg(l, char *);

	if (!s)
	{
		return (_puts("(null)"));
	}
	for (i = 0; s[i]; i++)
	{
		if (s[i] > 0 && (s[i] < 32 || s[i] >= 127))
		{
			_puts("\\x");
			count += 2;
		}
		if (s[i] < 16)
		{
			_putchar('0');
			count += print_hexaup(s[i]);
		}
		else
		{
			count += _putchar(s[i]);
		}
	}

	return (count);
}
