#include <stdio.h>
/**
 * main - Entry point
 *
 * Retuen: Always 0 (sucess)
 */
int main(void)
{
	int ch;

	for (ch = 'a' ; ch <= 'z' ; ch++){
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
