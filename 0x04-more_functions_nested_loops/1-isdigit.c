#include "main.h"
/**
 * _isdigit - checks for digits
 * @c: gets checked
 * Return: 1 on success, 0 on error
 */
int _isdigit(int c)
{
	if (c <= '0' && c >= '9')
		return (1);
	else
		return (0);
}
