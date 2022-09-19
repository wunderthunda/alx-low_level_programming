#include "main.h"

/**
 * print_array - prints n element of an array of integers
 *
 * @a : input array
 * @n : input n elements
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < ; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
			printf(", ");
	}
	printf("\n");
}
