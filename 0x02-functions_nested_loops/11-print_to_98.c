#include "main.h"
/**
 * print_to_98 - Prints natural numbers from 0 to 98
 *
 * Return: 0
 */
int print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		_putchar(n);
		if (n < 98)
		{
			_putchar(", ");
		}
	}
}
