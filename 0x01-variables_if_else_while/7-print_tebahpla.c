#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print lowercase alphabet backwards followed by a newline.
 * Return: Always 0 (Success)
 * Author: MarkEdwards
 */

int main(void)
{
char z;

for (z = 'z'; z >= 'a'; z--)
{
	putchar(z);
}
putchar('\n');

return (0);
}
