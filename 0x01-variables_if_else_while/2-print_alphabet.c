#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success/correct)
 */

int main(void)
{
char z;
z = 'a';

while (z <= 'z')
{
	putchar(z);
	z++;
}
putchar('\n');
return (0);
}
