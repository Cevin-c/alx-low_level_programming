#include "function_pointers.h"
/**
 * int_index - this functions find the index of a int
(* a blank line
 *@array: the array to find the index
 *@size: the size of the array
 *@cmp: this a function pointer.
* Description: this function find the index of a int)?
(* section header: the header of this function is function_pointers.h)*
* Return: this is a void function no return
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int z;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (z = 0; z < size; z++)
	{
		if (cmp(*(array + z)))
			return (z);
	}

	return (-1);
}
