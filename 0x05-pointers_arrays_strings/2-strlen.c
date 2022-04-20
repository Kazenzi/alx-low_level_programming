#include "main.h"
/**
 * _strlen - length of a string by pointer
 * @s: input char pointer
 * Return: length of a string
 */
int _strlen(char *s)
{
	int l = 0;

	while (*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
