#include "main.h"
/**
 * print_rev - prints line of string
 * @s: input of string
 * Return: void
 */
void print_rev(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		s++;
		count++;
	}
	while (count > 0)
	{
		s--;
		_putchar(*s);
		count--;
	}
	_putchar('\n');
}
