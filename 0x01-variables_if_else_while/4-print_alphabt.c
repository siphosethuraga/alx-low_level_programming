#include <stdio h>

/**
 * main - print the alphabet in lowercase followed by new line, not q and e
 * Return: Always 0 (success)
 */
int main(void)

{
	char la;

	for (la = 'a'; la <= 'z'; la++)
	{
		if (la != 'e' && la != 'q')
			putchar(la);
	}

	putchar('\n');

	return (0);
}
