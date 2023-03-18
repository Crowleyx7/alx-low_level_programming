#include <stdio.h>
/**
 * main - printing all the possible combinations op two two digit numbers
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num, num1, num2, num3;

	for (num = 0; num < 10; num++)
	{
		for (num1 = num ; num1 < 10; num1++)
		{
			for (num2 = num1 ; num2 < 10; num2++)
			{
				for (num3 = num1 + 1 ; num3 < 10; num3++)
				{
					num %= 10;
					putchar(num + '0');
					num1 %= 10;
					putchar(num1 + '0');
					putchar(' ');

					num2 %= 10;
					putchar(num2 + '0');
					num3 %= 10;
					putchar(num3 + '0');

					if (num != 9 || num1 != 9 || num2 != 9 || num3 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
