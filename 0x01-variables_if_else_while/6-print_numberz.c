#include <stdio.h>

/**
 * main - print single digit in base 10
 * Return: Always 0
*/
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	putchar('\n');

	return (0);
}
