#include <stdio.h>
int my_strlen(char str[]);

int main()
{
    char ch = 'b';
    char str[] = "abcdef";

    char str1[5];
    str1[0] = '3';
    str1[1] = '3';
    str1[2] = '3';
    str1[3] = '3';
    str1[4] = '\0';

    int size = my_strlen(str);
    printf("%d\n", size);
    size = my_strlen(str + 1);
    printf("%d\n", size);
    size = my_strlen(str + 2);
    printf("%d\n", size);
    size = my_strlen(str + 3);
    printf("%d \n", size);
    size = my_strlen(str + 4);
    printf("%d\n", size);
    int i = 0;
    while (str[i])
    {
        printf("%c", str[i++]);
    }

    printf("\n%s\n", str);
    printf("%2s\n", str);

    char str3[10];

    // scanf("%9s", str3);
    printf("%s\n", str3);
    printf("%d\n", str3[5]);

    printf("\n%ld\n", sizeof(char));

    ch = 'a';

    printf("-------------------Test-----------------------\n");
    printf("%p\n", &ch);
    printf("%c\n", ch);

    // scanf("%c", &ch);
    // printf("%c\n", ch);

    // scanf("%c", &ch);
    // printf("%c\n", ch);

    // scanf("%c", &ch);
    // printf("%c\n", ch);

    // scanf("%c", &ch);
    // printf("%c\n", ch);

    // scanf("%c", &ch);
    // printf("%c\n", ch);
    i = 0;
    char str4[11];
    // ch ='a'
    while (ch != '\n')
    {
        scanf("%c", &ch);
        str4[i] = ch;
        printf("%c\n", ch);
        i++;

        if (i == 10)
            break;
    }
    str4[10] = '\0';
    printf("%s", str4);
    return 0;
}
int my_strlen(char str[])
{
    int cnt = 0, i = 0;
    while (str[i++] != '\0')
        cnt++;
    return cnt;
}