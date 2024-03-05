#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

void child()
{
    puts("Hello child");
    printf("%d\n", getpid());
}
void parent()
{
    puts("Hello parent");
    printf("%d\n", getpid());
}
int main(int argc, char const *argv[])
{

    // for (int i = 0; i < argc; i++)
    // {
    //     puts(argv[i]);
    // }
    // if (fork() == 0)
    // {
    //     child();
    //     exit(0);
    // }
    // int status = -1;
    // wait(&status);
    // printf("%d\n", status);
    // parent();

    if (fork() == 0)
    {
        char *cmd[] = {"ls", "-l", NULL};
        execvp(cmd[0], cmd);
        exit(0);
        
    }
    int status = -1;
    wait(&status);
    printf("%d\n", status);
    puts("end");
    return 0;
}
