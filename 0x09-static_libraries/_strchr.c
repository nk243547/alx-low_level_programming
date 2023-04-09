#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

char *_strchr(char *s, char c)
{
while (*s != '\0')
{
if (*s == c)
return s;
s++;
}

if (c == '\0')
return s;

return NULL;
}
