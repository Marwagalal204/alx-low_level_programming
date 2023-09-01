#include <stdio.h>

int main(void)
{
	int i = 0, n;

	while (i < 100)
	{
		n = 0;

		while (n < 100)
		{
		putchar('0' + (n / 10));
		putchar('0' + (i % 10));
		n++;
		}
	i++;
	}
	return(0);
}
