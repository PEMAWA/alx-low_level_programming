#include <stdio.h>

/**
 * main -Starting the program
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int lowerCase = 'a';

	while (lowerCase <= 'z')
	{
		if (lowerCase == 'e' || lowerCase == 'q')
		{
			lowerCase += 1;
		}
		else
		{
			putchar(lowerCase);
			lowerCase += 1;
		}
	}
	putchar('\n');
	return (0);
}
