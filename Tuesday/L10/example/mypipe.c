#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>


int main(int argc, char const *argv[])
{
    int fd[2];
    pipe(fd);

    write(fd[1],"msg1",4);
    write(fd[1],"msg2",4);
    write(fd[1],"msg3",4);
    write(fd[1],"msg4",4);


    char buf[100];
    for (int i = 0; i < 4; i++)
    {
        read(fd[0],buf,4);
        puts(buf);
    }
    

    puts("barak");
    return 0;
}
