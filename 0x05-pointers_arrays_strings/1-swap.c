#include "main.h"

/**
 *swap_int - function that swaps the values of two integers
 *@a: first int
 *@b: second int
 *by sylva obah
 *Return 0
*/

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
