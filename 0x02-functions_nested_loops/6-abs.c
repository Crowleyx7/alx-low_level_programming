#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @n: get chekcer
 * Return: Always n
 */
int _abs(int n)
{
	if (n <= 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		n = n * 1;
		return (n);
	}
	return (0);
}
