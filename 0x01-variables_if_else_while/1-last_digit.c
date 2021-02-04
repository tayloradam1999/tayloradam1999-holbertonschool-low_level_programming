#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assigns a random number to the var "n" each time
 * it is executed.
 * Will print the last digit of the number stored in the var "n"
 *
 * Return: 0!
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;
	
	if (last > 5)
	printf("The last digit of %d is %d and is greater than 5\n", n, last);
	if (last == 0)
	printf("The last digit of %d is %d and is 0\n", n, last);
	if (last < 6) && (last != 0)
	printf("The last digit of %d is %d and is less than 6 and not 0\n", n, last);

	return (0);
}
