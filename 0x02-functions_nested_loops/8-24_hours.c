#include "main.h"
/**
 * jack_bauer - prints every minute of the day
 * 
 * Return: Always 0
 */
void jack_bauer(void)
{
	int a, b;
	for ( a = 0; a < 23; a++)
	{
		for ( b = 0; b < 59; b++)
		{
			a /= 10;
			_putchar(a + '0');
			a %= 10;
			_putchar(a + '0');
			b /= 10;
			_putchar(b + '0');
			b %= 10;
			_putchar(b + '0');
		}
	}
}
