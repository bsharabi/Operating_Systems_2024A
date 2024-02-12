#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "MyShell.h"
#include "MyFunctionShell.h"
int main()
{
    // wellcome();
    // while(1){
    //"cp file.c file2.c"
    //"cp\0file.c\0file2.c\0"
    //[100x,107x,114x,]

    char str[40] = "hello1 hello2 hello3";
    // puts(str);
    char *subStr = strtok(str, " ");
    // puts("SubStr");
    // puts(subStr);
    int argumentSize = 0;
    char **pArrWithMalloc = (char **)malloc(argumentSize + 1 * sizeof(char *));
    *(pArrWithMalloc + argumentSize) = subStr;
    while ((subStr = strtok(NULL, " ")) != NULL)
    {
        argumentSize++;
        pArrWithMalloc = (char **)realloc(pArrWithMalloc, argumentSize + 1 * sizeof(char *));
        *(pArrWithMalloc + argumentSize) = subStr;
        // puts(subStr);
    }
for (int i = 0; i <= argumentSize; i++)
{
   puts(pArrWithMalloc[i]);
}

    

    // }

    return 0;
}