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
	unsigned int count = 0;
	
	while (*s != '\0' && *accept != '\0' && *s == *accept)
	{
		count++;
		s++;
		accept++;
	}
	return (count);
}
