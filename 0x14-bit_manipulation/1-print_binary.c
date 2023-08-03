#include "main.h"

/**
* print_binary - prints a binary representation of a number
* @n: number to print binary representation of
* Return: void
*/
void print_binary(unsigned long int n)
{
	unsigned long int copy, i, k;

	copy = n;
	i = 0;
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (copy != 0)
	{
		i++;
		copy = copy >> 1;
	}
	while (i)
	{
	copy = n;
	for (k = 1; k < i; k++)
	copy = copy >> 1;
		if (copy == (copy | 1))
		_putchar('1');
		else
	_putchar ('0');
		i--;
	}
}
