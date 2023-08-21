#include "main.h"
void print_rev(char *s) {

	char c[100];
	int i,a;
	for(i = 0; *s != '\0'; i ++) {
		c[i] = *(s + i); 
	} 

	for(a = 100; a >= 0; a++) {
		_putchar(c[a]);
	} 
}
