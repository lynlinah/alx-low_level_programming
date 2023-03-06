#include "main.h"
/**
 * _strspn - Returns the number of bytes in the initial segment
 * consist only of bytes from accept
 * @s: pointer to the beginning of the string
 * @accept: reference bytes container
 * Return: the value of the count value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
