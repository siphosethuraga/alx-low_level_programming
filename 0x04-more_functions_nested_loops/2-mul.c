#include <stdio.h>
/**
 * mul - multiplies two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int mul(int a, int b)
{
	return (a * b);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a = 5;
	int b = 10;
	int c = mul(a, b);

	printf("%d\n", c);


/*
 * answer is 50
*/
	return (0);
}
