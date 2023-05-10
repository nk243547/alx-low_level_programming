#include "main.h"

#include <stdlib.h>

/**
* read_textfile - Reads a text file and prints it to POSIX stdout.
* @filename: A pointer to the name of the file.
* @letters: The number of letters the
* function should read and print.
*
* Return: If the function fails or filename is NULL - 0.
* O/w - the actual number of bytes the function can read and print.
*/


ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t bytes_read = 0;
char *buffer = NULL;
int fd;

if (filename == NULL)
return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

buffer = malloc(sizeof(char) * (letters + 1));
if (buffer == NULL)
{
close(fd);
return (0);
}

bytes_read = read(fd, buffer, letters);
if (bytes_read == -1)
{
free(buffer);
close(fd);
return (0);
}

buffer[bytes_read] = '\0';

if (write(STDOUT_FILENO, buffer, bytes_read) != bytes_read)
{
free(buffer);
close(fd);
return (0);
}

free(buffer);
close(fd);

return (bytes_read);
}



