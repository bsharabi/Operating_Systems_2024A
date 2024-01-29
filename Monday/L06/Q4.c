#include <stdio.h>
#include <string.h>
#include <ctype.h>
void str_rev(char *str)
{

    char *pEnd = str + strlen(str) - 1;
    char *pStart = str;

    while (pEnd > pStart)
    {
        char ch = *pStart;
        *pStart = *pEnd;
        *pEnd = ch;

        pStart++;
        pEnd--;
    }
}

int main()
{
    char str[] = "Barak Shalom\0"; // molahS karaB
    puts(str);
    str_rev(str);
    puts(str);

    return 0;
}