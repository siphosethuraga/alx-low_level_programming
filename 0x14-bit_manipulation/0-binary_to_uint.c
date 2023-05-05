#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: is s pointer that stores the memory alocated in 0 and 1
 *
 * Return: result
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		num <<= 1;
		if (*b == '1')
			num += 1;

		b++;
	}

	return (num);
}
