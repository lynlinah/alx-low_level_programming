#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - The _strpbrk() function locates the first
 * any of the bytes in the string accept
 * @s: pointer to the beginning of the string
 * @accept: pointer to the beginning of the string
 * Return: a pointer that match the character in s
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
				
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
