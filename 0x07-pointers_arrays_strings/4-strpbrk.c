#include "main.h"
/**
* _strpbrk - Entry point
* @s: input
* @accept: input
* Return: Always 0 (Success)
*/
char *_strpbrk(char *s, char *accept)
{
while (*s != '\0')
{
char *temp = accept;
while (*temp != '\0')
{
if (*s == *temp)
{
return (s);
}
temp++;
}
s++;
}
return (0);
}
