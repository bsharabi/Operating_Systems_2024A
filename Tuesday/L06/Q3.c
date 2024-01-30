#include <stdio.h>
#include <string.h>
#include <ctype.h>

int isPalindrome(char *str)
{
    int size = strlen(str);
    char *start = str, *end = str + size - 1;
    while (start < end)
    {
        if (*start != *end)
            return 0;

        start++;
        end--;
    }
    return 1;
}
int main()
{

    char str[] = "ABCDD CBA";
    puts(str);

    int ans = isPalindrome(str);
    printf("isPalindrome(str) -> %s\n", (ans) ? "True" : "False");

    return 0;
}