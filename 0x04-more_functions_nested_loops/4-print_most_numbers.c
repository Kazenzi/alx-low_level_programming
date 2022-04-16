#include "main.h"
/**
 * print_most_numbers - print 0-9 and end with new line.
 *
 * Return: 0-9and new line after
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}

