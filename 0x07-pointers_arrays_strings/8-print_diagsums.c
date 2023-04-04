#include "main.h"
#include <stdio.h>
/**
* print_diagsums - Entry point
* @a: input
* @size: input
* Return: Always 0 (Success)
*/

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0, sum2 = 0;

for (i = 0; i < size; i++)
{
sum1 += *(a + i * size + i);  /* sum of the elements on the main diagonal*/
sum2 += *(a + i * size + (size - i - 1));  /* sum of the elements on the secondary diagonal*/
}

printf("Sum of main diagonal elements: %d\n", sum1);
printf("Sum of secondary diagonal elements: %d\n", sum2);
}
