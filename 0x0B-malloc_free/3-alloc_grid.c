#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - return pointer to two dimensional array
 *
 * @width: width of array
 * @height: height of array
 *
 * Return: 0
 */

int **alloc_grid(int width, int height)
{
	int i, j, a, b;
	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	else
	{
		p = (int **) malloc(height * sizeof(int *));
	

	if (!p)
	{
		free(p);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		p[i] = (int *) malloc(width * sizeof(int));
		if (!p[i])
		{
			for (j = 0; j <= i; j++)
				free(p[j]);

			free(p);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
		{
			p[a][b] = 0;
		}
	}
	return (p);
	}
}
