#include "main.h"
#include "1-alphabet.c"
/**
 * main - Entery point
 * Description :  print_alphabet a function to print alphebet
 * Return: Always 0 (Success)
*/
void print_alphabet_x10(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		print_alphabet();
	}
}
