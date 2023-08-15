#include <stdio.h>
#include "main.h"
/**
 * int _abs : print absolute varible
 * @int - absolute integer
 * return : 0 for absolute number
*/
int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
