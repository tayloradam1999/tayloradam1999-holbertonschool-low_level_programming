#include "holberton.h"

/**
 * num - blahblah
 * @x: input
 * @y: input
 * Return: Prime numbers
 */

int num(int x, int y)
{
	float p = y / x;
	int pp = p;

	if (x == 1)
	{
		return (1);
	}
	if ((p - pp) == 0)
	{
		return (0);
	}
	return (num((x - 1), y));
}

/**
 * is_prime_number - Finds prime numbers
 * @n: Input int
 * Return: Int prime numbers
 */

int is_prime_number(int n)
{
	return (num(n, n));

}
