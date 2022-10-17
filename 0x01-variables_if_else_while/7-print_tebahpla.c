#include <stdio.h>
/**
 * main - prints alphabet in reverse
 * Return: always 0
 */

int main(void)
{
	char lz;

	for (lz = 'z'; lz >= 'a'; lz--)
		putchar(lz);

	putchar('\n');
	return (0);
}
