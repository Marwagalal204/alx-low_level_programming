#include "main.h"
#include <stdio.h>

void print_array(int *a, int n)
{
	for (n = 0; n < *a; n++)
		printf ("%d\n", *a);
}
