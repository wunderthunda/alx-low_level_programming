#include <stdio.h>

/**
 ** main - Entry point
 *
 ** Return: Always 0
 **/

int main(void)
{
	unsigned long int i, num = 612852475143;

	for (i = 3; i < 12057; i += 2)

	{
		while (num % i == 0 && num != i
			num /= i;
	}
	printf("%lu\n", num);

	return (0);
}
