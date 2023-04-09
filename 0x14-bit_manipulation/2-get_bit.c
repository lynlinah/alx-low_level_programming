#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: number to get the bit from
 * @index: index of the bit to get
 * Return: value of the bit at index index, or -1 if an error occurred
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	mask = (n >> index) & 1;

	return (mask);
}
