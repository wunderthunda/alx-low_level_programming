#include <stdio.h>

/**
 * main - prints first argument
 *
 * @argc: number of arguments
 * @argv: array of pointers to argc arguments
 *
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s", argv[0]);
	putchar('\n');

	return (0);
}
