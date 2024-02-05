#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{
    int number;
    scanf("%d",&number);
    char strS[10] = {'1'};
    char strS1[10] = {'1'};
    
    puts(strS);

    char *strM = (char *)malloc(10 * sizeof(char));
    free(strM);

    int arrS[40] = {0};

    int num = 40;

    int *arrM = (int *)malloc(num * sizeof(int));
    free(arrM);

    char *strC = (char *)calloc(40, sizeof(char));
    free(strC);

    int *arrC = (int *)calloc(53, sizeof(int));
    arrC = realloc(arrC, 75);
    free(arrC);

    char ch;
    int size = 0;
    char *test = (char *)malloc((size + 1) * sizeof(char));
    while ((ch = getchar()) != '\n')
    {
        *(test + size) = ch;
        size++;
        test = (char *)realloc(test, size + 1);
    }
    *(test + size) = '\0';

    puts(test);

    // iter 1 -> test {'b',0}
    // iter 2 -> test {'b','a',0}
    // iter 3 -> test {'b','a','r',0}
    // iter 4 -> test {'b','a','r','a',0}
    // iter 5 -> test {'b','a','r','a','k',0}

    free(test);
    return 0;
}