#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "MyShell.h"
#include "MyFunctionShell.h"
int main()
{
    wellcome();

    while (1)
    {
        // input string
        char* subStr;

        int argumentSize = 0;
        char **pArrWithMalloc = (char **)malloc(argumentSize + 1 * sizeof(char *));
        *(pArrWithMalloc + argumentSize) = subStr;
        while ((subStr = strtok(NULL, " ")) != NULL)
        {
            argumentSize++;
            pArrWithMalloc = (char **)realloc(pArrWithMalloc, argumentSize + 1 * sizeof(char *));
            *(pArrWithMalloc + argumentSize) = subStr;
        }
        for (int i = 0; i <= argumentSize; i++)
        {
            puts(pArrWithMalloc[i]);
        }
    }

    return 0;
}