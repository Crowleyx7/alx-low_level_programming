#include <stdio.h>
/**
 * main - print combination of numbers
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		num = num % 10;
		putchar(num + '0');
		if (num != 9)
			putchar(',');
			putchar(' ');
	}
	return (0);
}
