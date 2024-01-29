#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char str[])
{
    int size = strlen(str);
    char *pStart = str;          // pStart = A adrr = 100x
    char *pEnd = str + size - 1; // pEnd = A adrr = 106x
    
    //"ABCDCBA"
    // iter 0
    // pStart = A adrr = 100x
    // pEnd = A adrr = 106x

    // iter 1
    // pStart = B adrr = 101x
    // pEnd = B adrr = 105x

    // iter 2
    // pStart = C adrr = 102x
    // pEnd = C adrr = 104x

    // iter 3
    // pStart = D adrr = 103x
    // pEnd = D adrr = 103x

    while (pStart != pEnd)
    {
        if (*pStart != *pEnd)
            return 0;
        pStart++;
        pEnd--;
    }
    return 1;
}

int main()
{
    char str[] = "ABCDDCBA";
    printf("str -> %s\n", str);

    int ans = isPalindrome(str);
    printf("isPalindrome(str) -> %d\n", ans);

    return 0;
}