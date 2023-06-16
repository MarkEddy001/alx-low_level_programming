#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lower and upper alphabet on the same line
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
char z = 'a';
char Z = 'A';

while (z <= 'z')
{
	putchar(z);
	z++;
}
while (Z <= 'Z')
{
	putchar(Z);
	Z++;
}
putchar('\n');
return (0);
}
