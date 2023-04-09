#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int _atoi(char *s)
{
int sign = 1;
int num = 0;

if (*s == '-')
{
sign = -1;
s++;
}

while (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
s++;
}

return sign * num;
}
