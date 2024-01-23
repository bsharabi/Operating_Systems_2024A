#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define SIZE 80

int main()
{
    char str[SIZE] = {0};
    char Bstr[SIZE] = {0};

    scanf("%79s", str);

    char ch;
    int i = 0;

    while ((ch = getchar()) != '\n')
    {
        str[i++] = ch;
    }

    int len = strlen(str);
    printf("%d\n", len);

    i = 0;
    while (str[i])
    {
        Bstr[i] = str[i];
        i++;
    }

    int lw = 0, up = 0, digit = 0, cntCh = 0;
    i = 0;
    while (str[i])
    {
        if (islower(str[i])) // if(str[i]>='a' && str[i]<='z')
            lw++;
        else if (isupper(str[i])) // if(str[i]>=65 && str[i]<=91)
            up++;
        else if (isdigit(str[i])) // if(str[i]>=48 && str[i]<='9')
            digit++;
        else
            cntCh++;
        i++;
    }
    printf("lw -> %d\n", lw);
    printf("up -> %d\n", up);
    printf("digit -> %d\n", digit);
    printf("cntCh -> %d\n", cntCh);

    i = 0;
    while (str[i])
    {
         if(str[i]>='a' && str[i]<='z')
            str[i]-=32;
        else if(str[i]>=65 && str[i]<=91)
            str[i]+=32;
        i++;
    }

    puts(str);
    puts(Bstr);
    return 0;
}
