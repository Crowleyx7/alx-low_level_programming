#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */
/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (success)
 *     */
/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int last_digit = n % 10;

	if (last_digit > 5 )
		printf("the last digit of %d is %d greater than 5\n ", n, last_digit);
	else if ( last_digit < 6 && last_digit != 0 )
		printf("the last digit of %d is %d less than 6 and not 0 \n", n, last_digit);
	else if ( last_digit == 0)
		printf("the last digit of %d is %d and is 0 \n ", n, last_digit);
	return (0);
}