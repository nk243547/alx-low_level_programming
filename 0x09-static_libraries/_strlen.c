#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int _strlen(char *s)
{
int len = 0;
while (*s != '\0')
{
len++;
s++;
}
return len;
}
