#include "main.h"
/**
 * swap_int - swap 2 vlues using pointers
 * @a: - pointer to int
 * @b: - pointer to int
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
