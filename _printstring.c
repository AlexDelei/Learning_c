#include "main.h"
/**
 *_printstring - function that prints string
 *@s: string pointer
 *
 *Return:i
 */
int _printstring(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		putchar(*s);
		s++;
		i++;
	}
	return (i);
}