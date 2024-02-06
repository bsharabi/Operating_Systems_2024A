#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{

    int num;
    puts("Enter Number");
    scanf("%d", &num);
    int size = 0;
    int *arr = (int *)malloc(size * sizeof(int));
    while (num >= 0 && num <= 100)
    {
        arr = (int *)realloc(arr, (size + 1) * sizeof(int));
        *(arr + size) = num;
        size++;
        puts("Enter Number");
        scanf("%d", &num);
    }

    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        printf("%d ", *(arr + i));
        sum += *(arr + i);
    }
    puts("");
    printf("sum -> %d\n", sum);

    return 0;
}