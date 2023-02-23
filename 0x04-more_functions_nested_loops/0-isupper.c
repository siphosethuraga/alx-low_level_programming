#include <stdio.h>
/**
 * _isupper -checks whether a char is an uppercase letter
 *
 * @c: the charractor to check
 *
 * Return: (1) if c is an uppercase letter, or (0) otherwise.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
