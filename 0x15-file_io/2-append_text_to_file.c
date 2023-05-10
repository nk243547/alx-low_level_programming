#include "main.h"

/**
* append_text_to_file - Appends text to the end of a file.
* @filename: A pointer to the name of the file to append to.
* @text_content: A pointer to a string to append to the file.
*
* Return: If the function fails - -1.
* Otherwise - 1.
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, w, len = 0;

if (filename == NULL)
return (-1);

fd = open(filename, O_WRONLY | O_APPEND);

if (fd == -1)
return (-1);

if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;

w = write(fd, text_content, len);

if (w == -1)
return (-1);
}

close(fd);

return (1);
}
