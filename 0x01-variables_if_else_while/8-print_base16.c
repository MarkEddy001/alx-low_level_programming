#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print all the digits of base 16 in lowercase
 * Return: Always 0 (Success)
 * Author: MarkEdwards
 */

int main(void)
{
char x;

for (x = '0'; x <= '9'; ++x)
{
	putchar(x);
}
for (x = 'a'; x <= 'f'; ++x)
{
	putchar(x);
}
putchar('\n');

return (0);
}
