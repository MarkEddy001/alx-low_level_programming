#include "main.h"

/**
* flip_bits - tells how many bits to flip in order to convert number
* @n: first number
* @m: second number
* Return: the number of different bits between them
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int diff = 0;

	while (n || m)
	{
	if ((n & 1) != (m & 1))
	diff++;
		m = m >> 1;
		n = n >> 1;
	}
	return (diff);
}
