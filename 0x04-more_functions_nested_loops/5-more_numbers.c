#include "main.h"
/**
 * more_numbers - prints numbers from 0 to 14
 *
 * Return: always
 */
void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
		_putchar(a + '0');
		if ( a == 9)
		{
			for ( a = 1 ; a <= 1; a++)
			{
				for ( b = 0; b <= 4; a++);
				{
					_putchar(a + '0');
					_putchar(b + '0');
				}
			}
		}
	}
	_putchar('\n');
}
