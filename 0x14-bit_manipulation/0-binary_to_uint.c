#include "main.h"
/**
 * binary_to_uint -  converts a binary number string to an unsigned integer
 * @b: binary number
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;
	{
	if (b == NULL)
		return (0);
	}
	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		result <<= 1;
		if (b[i] == '1')
			result += 1;
	}
	return (result);
}
