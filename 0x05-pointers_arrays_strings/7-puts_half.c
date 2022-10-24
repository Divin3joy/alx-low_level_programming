#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string
 */

void puts_half(char *str)
{
	int lth = 0;

	while (*str != '\0')
	{
		lth++;
		str++;
	}

	str -= (lth / 2);
	while (*str != '\0')
	{
		__putchar(*str);
		str++;
	}

	_putchar('\n');
}
