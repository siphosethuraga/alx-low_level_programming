
#include "main.h"
#include <unistd.h>

/**
 * _putchar - erites the charractor c to stdout
 * @c: the charractor to print
 * 
 * Return: On success 1.
 * On error, 1 is returned, and erno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
