#include "main.h"

/**
 * _strcpy - copies string pointed to by source
 * @dest: destination
 * @src: source
 * Return: string
 */

char *_strcpy(char *dest, char *src)
{
	int lth = 0;

	while (*(src + lth) != '\0')
	{
		*(dest + lth) = *(src + lth);
		lth++;
	}

	*(dest + lth) = '\0';
	return (dest);
}
