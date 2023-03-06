#include "main.h"
/**
 * _memcpy - The _memcpy() function copies n bytes
 * memcpy provides a dimilar functin to standard library
 * @dest: a pointer to the destination memory area
 * @src: a pointer to the source memory area
 * @n: the number of bytes
 * Return: pointer to the beginning of the dest memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *p = dest;

	while (n--)
	{
		*p++ = *src++;
	}
	return (dest);
}
