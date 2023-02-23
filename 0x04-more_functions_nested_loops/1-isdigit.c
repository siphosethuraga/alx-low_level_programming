#include <stdio.h>

/**
 * _isdigit - checks whether given char is digit or not and uses 'c' as its int
 *
 * Return: (1) if char is digit (0) if not
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
		return (0);
}

/**
 * main - use c to check if digit or not *
 *
 * Return: (1) if digit (0) if not.
 */
int main(void)
{
	char c = '7';

	if (_isdigit(c))
	{
		printf("%c is a digit.\n", c);
	}
	else
	{
		printf("%c is not not a digit.\n", c);
	}
	return (0);
}
