#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void swap(int a, int b)
{

    printf("swap:a - > %d\n", a);
    printf("swap:b - >%d\n", b);

    int temp = a;
    a = b;
    b = temp;

    printf("swap:a - > %d\n", a);
    printf("swap:a address- > %p\n", &a);
    printf("swap:b - >%d\n", b);
    printf("swap:b address - > %p\n", &b);
}

#include <ctype.h>

void swapP(int *a, int *b)
{

    printf("swap:a - > %d\n", *a);
    printf("swap:b - >%d\n", *b);

    int temp = *a;
    *a = *b;
    *b = temp;

    printf("swap:a - > %d\n", *a);
    printf("swap:a address- > %p\n", a);
    printf("swap:b - >%d\n", *b);
    printf("swap:b address - > %p\n", b);
}

int main()
{
    int num;
    int arr[100];

    printf("%p\n", &arr[8]);

    int a = 4, b = 5;
    swap(a, b);

    printf("main:a - > %d\n", a);
    printf("main:a address- > %p\n", &a);
    printf("main:b - >%d\n", b);
    printf("main:b address - > %p\n", &b);

    swapP(&a, &b);

    printf("main:a - > %d\n", a);
    printf("main:a address- > %p\n", &a);
    printf("main:b - >%d\n", b);
    printf("main:b address - > %p\n", &b);

    char str[100] = "ksjhdkjsdhfkjsdhfkfh";

    char *temp = str;

    while ((*temp++) == 'j');

    int num1 = 10;
    temp = (char*)malloc(num1);

    return 0;
}