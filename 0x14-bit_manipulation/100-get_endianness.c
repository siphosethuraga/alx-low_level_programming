#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* get_endianness - checks the endianness of ghe orog
* ptr - pointer 
* num - number 
*
* Return: 0 if it is a huge endiann 1 if not
*/

int get_endianness(void)
{
	unsigned int num = 1;
	char *ptr = (char *)&num;

	if (*ptr)
		return (1);
	else 
		return (0);
}
