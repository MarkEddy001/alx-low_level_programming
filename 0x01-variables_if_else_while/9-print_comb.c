#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Description: Print all single integer numbers of base 10
 *stating from 0, followed by a new line
 * Return: Always 0 (Success)
 * Author: MarkEdwards
 */

int main(void)
{
int integer;

for (integer = '0'; integer <= '9'; integer++)
{
	putchar(integer);

	if (integer != '9')

	{
		putchar(',');
		putchar(' ');
	}
}
putchar('\n');

return (0);
}
