#include "main.h"
#include <stdio.h>

/**
 * _strncpy - Entry point
 * @dest: copy to
 * @src: copy from
 * @n: input number of char
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
		if (a < n)
			dest[a] = src[a];
		while (a < n)
			dest[a++] = '\0';

	return (dest);
} 
