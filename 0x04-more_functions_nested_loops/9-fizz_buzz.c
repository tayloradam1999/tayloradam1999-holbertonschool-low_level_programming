#include "holberton.h"
#include <stdio.h>

/**
 * main - Fizz buzz interview question
 * Return: 0
 */

void main(void)
{
	int x = 1;

	for (; x <= 100; x++)
	{
		if (x % 3 == 0 && x % 5 != 0)
		{
			printf("Fizz ");
		}
		if (x % 5 == 0 && x % 3 != 0)
		{
			printf("Buzz");
			if (x != 100)
			{
				printf(" ");
			}
		}
		if (x & 5 == 0 && x % 3 == 0)
		{
			printf("FizzBuzz ");
		}
		if (x % 5 != 0 && x % 3 != 0)
		{
			printf("%d ", x);
		}
	}
}
