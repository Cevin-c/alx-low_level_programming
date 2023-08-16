#include<stdio.h>
#include<stdlib.h>
/**
 * main- Entry point
(* a blank line
 *@argc: the number of parameters.
 *@argv: the parameeters in the case the number ob bytes.
* Description: this program prints opcodes in hexa)?
* Return: 0 in succes
*/
int main(int argc, char *argv[])
{
	int a, z;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	z = atoi(argv[1]);
	if (z < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (a = 0; a < z; a++)
	{
		printf("%02hhx", *((char *)main + a));
		if (a < z - 1)
			printf(" ");
		else
			printf("\n");
	}
	return (0);
}
