#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * Description: prints a string
 * On success: return the number of characters printed
 */
void _puts(char *str);
{
	int a = 0;

	while (str[a] != '\n')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
