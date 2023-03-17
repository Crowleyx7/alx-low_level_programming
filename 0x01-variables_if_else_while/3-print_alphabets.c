#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch,cha;
	for ( ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);

	}
	for ( cha = 'A'; cha <= 'Z'; cha++)
	{
		putchar(cha);
	}
	putchar('\n');
	return (0);
}
