#include "main.h"
/**
 * print_last_digit - prints lust digit of a number
 * @n: gets checked
 * Return: Always n
 */
int print_last_digit(int n)
{
	n %= 10;
	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
