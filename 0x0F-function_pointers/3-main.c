#include "3-calc.h"
/**
 * main - Entry point
 * @argc: the number of the parameters
 * @argv: the parameters in the case the number to be calculated.
(* a blank line
* Description: this program is the enttry point for a calculator)?
(* section header: 3-calc.h)*
* Return: 0 in success
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*p)(int, int);

	if (argc < 4 || argc > 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = p(a, b);

	printf("%d\n", result);
	return (0);
}
