#include "main.h"
/**
* _strspn - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int found = 0;
int i;

while (*s != '\0')
{
found = 0;
for (i = 0; accept[i] != '\0'; i++)
{
if (*s == accept[i])
{
count++;
found = 1;
break;
}
}
if (found == 0)
{
break;
}
s++;
}

return (count);
}
