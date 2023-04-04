#include "main.h"
#include <string.h>
/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Always 0 (Success)
*/
char *_strstr(char *haystack, char *needle)
{
int haystack_len = strlen(haystack);
int needle_len = strlen(needle);
int i;

if (needle_len == 0)
{
return (haystack);
}

for (i = 0; i <= haystack_len - needle_len; i++)
{
if (strncmp(&haystack[i], needle, needle_len) == 0)
{
return (&haystack[i]);
}
}

return (0);
}
