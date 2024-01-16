#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num = 4;
    printf("%d\n", num);
    //    num= scanf("%d");
    printf("Enter Number\n");
    scanf("%d", &num);
    printf("%d\n", num);

    char ch = 97;
    printf("%c\n", ch);
    //    num= scanf("%d");

    printf("Enter Char\n");
    getchar();

    scanf("%c", &ch);
    printf("%c\n", ch);
    fflush(NULL);
    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%c", &ch);
    printf("%c\n", ch);

    scanf("%c", &ch);
    printf("%c\n", ch);

    char chs[10];

    for (int i = 0; i < sizeof(chs) / sizeof(char); i++)
    {
        // scanf("%c", &chs[i]);
        scanf("%c", chs + i);
        printf("%c\n", chs[i]);
    }

    return 0;
}
