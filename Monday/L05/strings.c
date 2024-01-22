#include <stdio.h>
#include <string.h>


int main(int argc, char const *argv[])
{
    char str[30] = {0};

    scanf("%30s", str);
    str[29]='\0';
    printf("%s\n", str);

    scanf("%30s", str);
    printf("%s\n", str);


    return 0;
}
