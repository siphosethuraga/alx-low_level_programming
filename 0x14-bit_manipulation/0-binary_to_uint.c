#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: is s pointer that stores the memory alolocated in 0 and 1
 *
 * Return: result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0
		if (b == 0)
			return (0);

	for (int i = 0; b[i] != '\0'; i++;
			{
			if (b[i] != 0 && b[i] != 1)
			return (0);

			result <<= 1;
			if (b[i] == 1)
			result |= 1;
			}

			return (result);
}

