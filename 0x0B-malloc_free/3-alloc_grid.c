#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -   returns a pointer to a 2 dimensional array of integers.
 * @width: width value
 * @height: height value
 * Return: NULL if width or height is 0
 */
int **alloc_grid(int width, int height)
{
	int **whi;
	int g, s;

	if (width <= 0 || height <= 0)
		return (NULL);

	whi = malloc(sizeof(int *) * height);

	if (whi == NULL)
		return (NULL);

	for (g = 0; g < height; g++)
	{
		whi[g] = malloc(sizeof(int) * width);

		if (whi[g] == NULL)
		{
			for (; g >= 0; g--)
				free(whi[g])

			free(whi);
			return (NULL);
		}
	}

	for (g = 0; g < height; g++)
	{
		for (s = 0; s < width; s++)
			whi[g][s] = 0;
	}

	return (whi);
}

