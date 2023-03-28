#include "main.h"
/**
 * swap_int - swaps the value of to int
 * @a: gets swapped
 * @b: gets swapped
 */
void swap_int(int *a, int *b)
{
	int i = *a;
	*a = *b;
	*b = i;
}
