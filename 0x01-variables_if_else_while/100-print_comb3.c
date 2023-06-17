#include <stdio.h>

/**
 * main - a program to print all combination of two digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	int j;

	for  (i = 0; i < 9; i++)
	{
		for (j = 0; j < 10 ; j++)
		{
			putchar((i % 10) + '0');
			putchar((j % 10) + '0');

			if (i == 8 && j == 9)
			{
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
