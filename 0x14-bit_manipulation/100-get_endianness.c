#include "main.h"
/**
 * get_endianness - checks the size of a machine endian
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
int digit = 1;
char *j = (char *)&digit;
if (*j == 1)
{
return (1);
}
else
{
return (0);
}
}
