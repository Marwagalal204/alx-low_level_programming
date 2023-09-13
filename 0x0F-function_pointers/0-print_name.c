#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - a function prints a name.
 * @name: input name
 * @f: function point to name
 * Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
