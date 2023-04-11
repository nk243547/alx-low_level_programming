#include "main.h"
#include<stdio.h>
#include<stdlib.h>
char *str_concat(char *s1, char *s2);

int main(void)
{
char *s;

s = str_concat("Betty", "Holberton");

if(s == NULL)
{
printf("failed\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
