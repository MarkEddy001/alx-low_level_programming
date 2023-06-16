#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point
 * Description: Print numbers 0 to 9 followed by a newline
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int main(void)
{
int a;
a = 0;

while (a <= 9)
{
	printf("%d", a);
	a++;
}
putchar('\n');

return (0);
}
