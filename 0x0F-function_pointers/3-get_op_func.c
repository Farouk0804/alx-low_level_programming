#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - selects the correct function to
 * perform the operation asked by the user based on
 * the operator passed as an argument to the program.
 * @s: operator passed as a string
 *
 * Return: pointer to the function that corresponds
 * to the operator given as a parameter or NULL otherwise.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
	    {"+", op_add},
	    {"-", op_sub},
	    {"*", op_mul},
	    {"/", op_div},
	    {"%", op_mod},
	    {NULL, NULL}};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(s, ops[i].op) == 0 && *(s + 1) == '\0')
			return (ops->f);
		i++;
	}

	return (NULL);
}
