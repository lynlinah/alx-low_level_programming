#include <stdio.h>
#include "main.h"

/**
 * print_binary - print the binary representation of a number
 * @n: the number to print
 */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int bit;

	for (i = 63; i >= 0; i--)
	{
		bit = n >> i;
		if (bit & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
			putchar('0');
	}
	if (!count)
		putchar('0');
}
