#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* clear_bit - set value of bit to 0
* @n: is a pointer
* @index: index
*
* Return: 1 if works -1 if it doesnt
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n &= ~(1UL << index);

	*n &= ~(1UL << index);
	
	return (1);
}

