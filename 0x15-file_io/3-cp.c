#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include <sys/stat.h>

#include "main.h"
int main(int argc, char *argv[])
{
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
exit(97);
}

int fd_from = open(argv[1], O_RDONLY);
if (fd_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}

struct stat st;
if (stat(argv[2], &st) == 0)
{
if (S_ISDIR(st.st_mode))
{
dprintf(STDERR_FILENO, "Error: %s is a directory\n", argv[2]);
exit(21);
}
if (unlink(argv[2]) == -1)
{
perror("Error");
exit(99);
}
}

int fd_to = open(argv[2], O_WRONLY | O_CREAT, 0644);
if (fd_to == -1)
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}

char buffer[BUFFER_SIZE];
ssize_t nread;
while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
{
if (write(fd_to, buffer, nread) != nread)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
exit(99);
}
}
if (nread == -1)
{
perror("Error");
exit(98);
}

if (close(fd_from) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
exit(100);
}
if (close(fd_to) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
exit(100);
}

return (0);
}
