#include "main.h"
/**
 * times_table - prints time table
 * @n: gets checked
 * Return: 0
 */
void times_table(void)
{
	int a, b, r;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			r = a * b;
			if ( r < 10)
			{
				_putchar( r + '0');
				if ( b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else if ( r >= 10)
			{
				_putchar(( r / 10) + '0');
				_putchar(( r % 10) + '0');
				if ( b != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}	
		}
	_putchar('\n');
	}
}
