#include "main.h"

/**
 * _puts_recursion - prints a string
 * @s: pointer parameter of string
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
