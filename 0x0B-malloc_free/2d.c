#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
        int **matrix;
        int i, j;
        int fill_value;
        if (width <= 0 || height <= 0)
        {
                return (NULL);
        }
        fill_value = 0;
        matrix = malloc(sizeof(int *) * width);
        if (matrix == NULL)
        {
                return (NULL);
        }
        for (i = 0; i < width; i++)
        {
                matrix[i] = malloc(sizeof(int) * height);
                if (matrix[i] == NULL)
                {
                        for (j = 0; j < i; j++)
                        {
                                free(matrix[j]);
                        }
                        free(matrix);
                        return (NULL);
                }
        }
        for (i = 0; i < width; i++)
        {
                for (j = 0; j < height; j++)
                {
                        matrix[i][j] = fill_value;
                }
        }
        return (matrix);
}
