#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_grid - prints a grid of integers
 * @grid: the address of the two dimensional grid
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
        int freenum;
        int x;
        int y;
        int i;
        int **arr;
        if (width < 1 || height < 1)
                return (NULL);
        arr = malloc(sizeof(int *) * height);
        if (arr == NULL)
                return (NULL);
        for (i = 0; i < height; i++)
        {
                arr[i] = malloc(sizeof(int) * width);
                if (arr[i] == NULL)
                {
                        for (freenum = 0; freenum < i; freenum++)
                        {
                                free(arr[freenum]);
                        }
                        free(arr);
                        return (NULL);
                }
        }
        for (x = 0; x < height; x++)
        {
                for (y = 0; y < width; y++)
                {
                        arr[x][y] = 0;
                }
        }
        return (arr);
}
