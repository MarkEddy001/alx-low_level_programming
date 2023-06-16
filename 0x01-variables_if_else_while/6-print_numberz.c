#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print numbers 0 to 9 followed by a newline
 * Return: Always 0 (Success)
 * Author: MarkEdwards
 */

int main(void)
{
int i;

for (i = '0'; i <= '9'; i++)
{
	putchar(i);
}
putchar('\n');
return (0);
}
