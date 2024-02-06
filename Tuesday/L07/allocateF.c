#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{

    char str[40] = {0};
    int size;
    puts("Enter size");
    scanf("%d", &size);
    char *strM = (char *)malloc(size * sizeof(char));
    free(strM);

    char *strS;
    for (int i = 1; i <= 100000; i++)
    {
        strS = (char *)malloc(i * sizeof(char));
        free(strS);
    }

    return 0;
}