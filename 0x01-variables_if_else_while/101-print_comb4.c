#include <stdio.h>
/**
 * main - prints all possible combinations of three digits
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num, num1, num2;

	for (num = 0; num < 10; num++)
	{
		for (num1 = num + 1; num1 < 10; num1++)
		{
			for (num2 = num1 + 1; num2 < 10; num2++)
			{
				num %= 10;
				putchar (num + '0');
				num1 %= 10;
				putchar (num1 + '0');
				num2 %= 10;
				putchar (num2 + '0');
				if (num != 7 || num1 != 8 || num2 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
