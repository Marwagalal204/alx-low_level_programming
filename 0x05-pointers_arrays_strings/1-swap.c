#include "main.h"
/**
 * swap_int - swapint  value of two pointers
 * @a: firs pointer
 * @b: second pointer
 * Descrption: swaping the *a, *b vlue
*/

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;

	*a = d;
	*b = c;
}
