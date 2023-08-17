#include <stdio.h>

int main(void)
{
	int i = 1;
	int t = (i * 3);
	int f = (i * 5);
	int tf = (i * 15);
	
	for (i = 1; i <= 100; i++)
	{
		if (i == t)
			printf("Fizz ");
		else if (i == f)
			printf("Buzz ");
		else if (i == tf)
			printf("FizzBuzz ");
		else
			printf("%d ", i);
	}
	printf("\n");
	i++;
	return (0);
}
