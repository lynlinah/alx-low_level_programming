#include "main.h"
/**
 * _puts_recursion - function prints each character
 * @s: targeted output
 * Return: returns void
 */
void _puts_recursion(char *s);
{
	if (*s == '\0')
		_putchar('\n');
		return;
	{
	_putchar(*s);
	_puts_recursion(s + 1);
	}
}
