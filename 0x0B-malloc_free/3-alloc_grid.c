#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to
 *              a 2 dimensional array of integers.
 *
 * @width: width
 * @height: height
 *
 * Return: NULL on faliure
*/

int **alloc_grid(int width, int height)
{
	int **arr, i, x;

	i = 0;

	arr = malloc(sizeof(arr[i]) * height);
	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);
	while (i < height)
	{
		x = 0;
		arr[i] = malloc(sizeof(*arr[i]) * width);
		if (arr[i] == 0)
		{
			free(arr);
			return (NULL);
		}
		while (x < width)
		{
			arr[i][x] = 0;
			x++;
		}
		i++;
	}
	return (arr);
}
