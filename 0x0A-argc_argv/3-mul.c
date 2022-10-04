#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutipley two argument
 *
 * @argc: number of argument
 * @argv: array of pointers to strin arguments
 *
 * Return: 0 || 1
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	return (0);
}
