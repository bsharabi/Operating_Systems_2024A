#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int num = 20;
    // char str[num] ={0}; error
    char str2[50];

    // *(str2+num)

    char *strM = (char *)malloc(num * sizeof(char));
    int *arrM = (int *)malloc(num * sizeof(int));

    char *strC = (char *)calloc(num, sizeof(char));
    int *arrC = (int *)calloc(num, sizeof(int));

    arrC = (int *)realloc(arrC, num * sizeof(int) * 2);

    char ch;
    int size = 1;
    int index = 0;

    char *str = (char *)malloc(size * sizeof(char));

    puts("Enter strings");
    while ((ch = getchar()) != '\n')
    {
        *(str + index) = ch;
        size++;
        index++;
        str = (char *)realloc(str, size * sizeof(char));
    }
    *(str + index) = '\0';
    puts(str);
    printf("%ld\n",strlen(str));
    
    // str[index]
    return 0;
}