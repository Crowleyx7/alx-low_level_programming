#include "main.h"
/**
 * main - computes the absolute value of an integer
 * @n: get chekcer
 * Retrun: Always 0
 */
int _abs(int n)
{
	if (n <= 0)
	{
		n = n * -1;
		return(n);
	}
	else
	{
		n = n * 1;
		return(n);
	}
	return (0);
}
