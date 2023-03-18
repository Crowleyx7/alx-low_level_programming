#include <stdio.h>
/**
 * main - pronts all possible combination of two digits
 *
 * Return: always 0 (sucess)
 */
int main(void)
{
	int num, num1;

	for (num = 0; num < 9 ; num++)
	{
	for (num1 = num + 1; num1 < 10; num1++)
		{
			num %= 10;
			putchar(num + '0');
			num1 %= 10;
			putchar(num1 + '0');
			if (num != 8 || num1 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
