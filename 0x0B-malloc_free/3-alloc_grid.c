#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int x, z;

	if (height <= 0 || width <= 0)
		return (NULL);

	array = (int **) malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		array[x] = (int *) malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			free(array);
			for (z = 0; z <= x; z++)
				free(array[z]);
			return (NULL);
		}
	}

	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			array[x][z] = 0;
		}
	}
	return (array);
}
