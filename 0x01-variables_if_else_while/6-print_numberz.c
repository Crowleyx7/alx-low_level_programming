#include <stdio.h>
/**
 * main - print number without using char type variable
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		num = num % 10;
		putchar(num + '0');
	}
	putchar('\n');
	return (0);
}
