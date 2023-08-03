#include "main.h"

/**
* clear_bit - sets a bit to 0 at index
* @n: number to chnage
* @index: index where to change
* Return: 1 if success, -1 if not
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
unsigned long int limit;

	if (!n)
		return (-1);

	limit = (sizeof(unsigned long int) * 8) - 1;

	if (index > limit)
		return (-1);
	limit = 1 << index;
	if ((limit | *n) == *n)
		*n = *n ^ limit;
	return (1);
}
