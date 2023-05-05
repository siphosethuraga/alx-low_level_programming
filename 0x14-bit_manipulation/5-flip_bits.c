#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* flip_bits - number of bits to flip
* @n: fits num
* @m:number 2
*
* Return - number of bits needed to flip
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int mask = 1;

	for (int i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & mask) != (m & mask))
		{
			count++;
		}
		
		mask <<= 1;
	}
	 
	return (count);
}

