#include "main.h"
/**
 * _islower - check for lower characters
 */
int _islower(int c)
{
	if ( (c = 'a') && (c <= 'z'))
	{
		_putchar('1');
	}
	else if ( (c = 'A') && (c <= 'z'))
	{
		_putchar('0');
	}
	return (0);
}
