#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lowercase alphabet excluding e and q
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
char z = 'a';

while (z <= 'z')
{
	if (z != 'e' && z != 'q')
	{
		putchar(z);
	}
	z++;
}
putchar('\n');
return (0);
}
