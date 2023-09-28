#include "main.h"

/**
 * binary_to_uint - function converts binary to unsigned int.
 * @b: pointer to the binary
 * Return: 0 for failure and converted number for success
*/
unsigned int binary_to_uint(const char *b)
{
	int result = 0;

	if (b == NULL)
		return (0);

	while (*b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			result = (result << 1) | (*b - '0');
			b++;
		}
		else
			return (0);
	}
	return (result);
}
