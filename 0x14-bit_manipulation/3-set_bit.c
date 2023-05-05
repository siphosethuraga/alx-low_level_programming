#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* set_bit - sets value of bit to 1
* @n: pointer to a set bit number
* @index: index of the bit to set, starting from 0
*
* Return: 1 if works, -1 if it doesnt
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n |= (1UL << index);

	return (1);
}
