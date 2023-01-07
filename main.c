#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

int main(void)
{
    int fd1;
    int fd2;
    char *line;

    fd1 = open("test.txt",O_RDONLY);
    fd2 = open("test2.txt",O_RDONLY);
    // while ((line = get_next_line(fd))!= NULL)
    for (int i = 0; i < 3; i++)
    {
        line = get_next_line(fd1);
        printf("%s",line);
        free(line);
        line = get_next_line(fd2);
        printf("%s",line);
        free(line);
    }
    // free(line);
    close(fd1);
    close(fd2);
    return(0);
}