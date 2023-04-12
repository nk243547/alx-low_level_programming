#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void free_grid(int **grid, int height);

/**
* print_grid - prints a grid of integers
* @grid: the address of the two dimensional grid
* @width: width of the grid
* @height: height of the grid
*
* Return: Nothing.
*/
void print_grid(int **grid, int width, int height)
{
int w;
int h;

h = 0;
while (h < height)
{
w = 0;
while (w < width)
{
printf("%d ", grid[h][w]);
w++;
}
printf("\n");
h++;
}
}

/**
* alloc_grid - creates a 2D integer grid
* @width: width of the grid
* @height: height of the grid
*
* Return: pointer to the newly created 2D integer grid
*         or NULL if failure
*/
int **alloc_grid(int width, int height)
{
int **grid;
int i;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);
if (grid == NULL)
return (NULL);

for (i = 0; i < height; i++)
{
grid[i] = (int *) malloc(sizeof(int) * width);
if (grid[i] == NULL)
{
free_grid(grid, i);
return (NULL);
}
}

return (int **) grid;
}
print_grid(grid, 6, 4);
printf("\n");
grid[0][3] = 98;
grid[3][4] = 402;
print_grid(grid, 6, 4);
free_grid(grid, 4);
return (0);
}

