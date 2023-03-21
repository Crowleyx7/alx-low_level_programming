#include "main.h"
/**
 * main - printd alphabet
 *
 * Return: Always 0
 */
int main(void)
{
	void print_alphabet(void)
	{
		char ch;
		for (ch = 'a';'z' <= ch; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
	return (0);
}
