nclude <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - pointer to function
 *
 * @s: operator
 *
 * Return: 0 || NULL
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_add},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;

	while (i < 5)
	{
		if (s[0] == ops[i].op[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
