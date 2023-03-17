#include <stdio.h>
/**
 * Main - prints all the number of base 16
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	int num,ch;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}	
