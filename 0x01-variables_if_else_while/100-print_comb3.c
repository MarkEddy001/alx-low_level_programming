#include <stdio.h>
/**
 *main - Entry point.
 *Description:	Print all possible combinations of two different digits,
 *		in ascending order, separated by comma followed by a space
 *
 *Return: Always 0 (Success).
 *Author: MarkEdwards
 */

int main(void)
{
	int integer_a;
	int integer_b;

	for (integer_a = 0; integer_a < 9; integer_a++)
	{
		for (integer_b = integer_a + 1; integer_b < 10; integer_b++)
		{
			putchar(integer_a + '0');
			putchar(integer_b + '0');

			if (integer_a == 8 && integer_b == 9)
			continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar ('\n');

	return (0);
}
