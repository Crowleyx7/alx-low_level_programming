#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n - to be checked
 * Return: Always 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		putchar('-');
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
