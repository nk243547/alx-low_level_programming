#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

void _puts(char *s)
{
while (*s != '\0')
{
write(1, s, 1);
s++;
}
write(1, "\n", 1);
}
