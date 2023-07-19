#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - performs simple operations
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	/* check for correct number of arguments */
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	/* get numbers to operate on */
	a = atoi(argv[1]);
	b = atoi(argv[3]);

	/* check for division or mod by 0 */
	if ((argv[2][0] == '/' || argv[2][0] == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	/* get the appropriate function pointer */
	op_func = get_op_func(argv[2]);
	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	/* perform the operation */
	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
