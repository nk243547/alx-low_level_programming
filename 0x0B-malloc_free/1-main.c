#include "main.h"
#include<stdio.h>
#include<stdlib.h>
char *_strdup(char *str);
int main(void)
{
char *s;
s = _strdup("ALXSE");
if(s == NULL)
{
printf("failed to allocate memory\n");
return (1);
}
printf("%s\n", s);
free(s);
return (0);
}
