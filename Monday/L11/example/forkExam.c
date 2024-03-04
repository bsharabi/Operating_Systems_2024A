#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>
void parent()
{
    printf("%d\n", getpid());
    puts("Hello parent");
}

void child()
{
    printf("%d\n", getpid());
    puts("Hello child");
}
int main(int argc, char const *argv[])
{
    // pid_t pid = fork();
    // if (pid == 0)
    // {
    //     child();
    //     exit(EXIT_FAILURE);
    // }else{

    // }
    // int stat=-1;
    // printf("%d\n",stat);
    // wait(&stat);
    // printf("%d\n",stat);
    // parent();

    fork();
    fork();
    fork();
    fork();
    child();
    parent();
    return 0;
}

//     pid_t pid = fork();
//     if (pid == 0)
//     {
//         child();
//         exit(0);
//     }
//     parent();
//     return 0;
// }
// 4021
// Hello parent
// 4021
// Hello child
// 4022
// Hello parent
// 4022
// Hello child