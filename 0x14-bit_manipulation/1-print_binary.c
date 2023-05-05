#include <stdio.h>
#include "main.h"

/**
* print_binary - prints the bin number
* @n: unsigned int
* filt -extract word from n
* prints - is an int function
* @i - is an int function
*
* Return: null
*/

void print_binary(unsigned long int n)
{
	unsigned long int filt = 1;
	int i, prints = 0;

	filt = filt << (sizeof(unsigned long int) * 8 - 1);
	for (i = 0; i < sizeof(unsigned long int) * 8; i++)
	{
		if ((n & filt) == 0 && prints)
			_putchar('0');
		else if ((n & filt) != 0)
		{
			_putchar('1');
			prints = 1;
		}

		filt = filt >> 1;
	}

	if (!prints)
		_putchar('0');
}
