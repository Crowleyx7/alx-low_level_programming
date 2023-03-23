#include "main.h"
/**
 * _isupper - checks for uppercase characters
 * @c: gets checked
 * Return: on succes  1, on error 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
