#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>
#include <sys/wait.h>
int main(int argc, char const *argv[])
{
    char *args[] = {"ls", "-l", NULL}; // Command to execute: ls -l

    printf("Executing ls -l command...\n");

    // Execute the command using execvp

    pid_t pid = fork();
    if (pid == -1)
    {
        printf("fork err\n");
        return 0;
    }
    if (pid == 0)
    {
        if (execvp(args[0], args) == -1)
        {
            perror("execvp"); // Print an error message if execvp fails
            return 1;
        }
        else
            waitpid(pid, NULL, 0);
    }
    wait(NULL);
    puts("ddddd");
    return 0;
}
