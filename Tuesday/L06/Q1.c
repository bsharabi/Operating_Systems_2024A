#include <stdio.h>
#include <string.h>
#include <ctype.h>

int compareWithArray(char s1[], char s2[])
{
    int i = 0;
    while (s1[i] != '\0' && s2[i] != '\0')
    {

        if (s1[i] != s2[i])
            return 0;
        i++;
    }
    return 1;
}

// int compareWithArray1(char s1[], char s2[])
// {
//     int i = 0;
//     while (*(s1 + i) != '\0' && s2[i] != '\0')
//     {

//         if (s1[i] != s2[i])
//             return 0;
//         i++;
//     }
//     return 1;
// }

int compareWithPointer(char *s1, char *s2)
{
    while (*s1 && *s2)
    {
        if (*s1 != *s2)
            return 0;
        s1++;
        s2++;
    }
    return 1;
}

int main()
{
    char str1[] = "Rafi";
    char str2[] = "Refi";

    puts(str1);
    puts(str2);

    int ans = compareWithArray(str1, str2);
    printf("compareWithArray(str1, str2) -> %d\n", ans);

    // str1=str2; error
    // int arr[1];
    // char* p =arr;

    ans = compareWithPointer(str1, str2);
    printf("compareWithArray(str1, str2) -> %d\n", ans);

    char ch1 = 'a', ch2 = 'k';

    printf("ch1 address -> %p\n", &ch1);
    printf("ch2 address -> %p\n", &ch2);

    char *p = &ch1;

    printf("p address -> %p\n", p);
    printf("&p address -> %p\n", &p);

    printf("%c\n", *p);
    p++;
    printf("%c\n", *p);

    char ch4 = 'b';

    char ch5 = 'c';

    printf("ch4 address -> %p\n", &ch4);
    printf("ch5 address -> %p\n", &ch5);

    return 0;
}