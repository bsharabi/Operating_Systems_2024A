#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *str_str(char str1[], char str2[])
{

    char *cp = str1, *s1 = NULL, *s2 = NULL;

    if (str2[0] == '\0')
        return str1;

    puts("-------------------------------------------------");
    printf("str1[0] -> %c\n", str1[0]);
    printf("cp[0] -> %c\n", cp[0]);
    printf("*cp -> %c\n", *cp);
    printf("*str1 -> %c\n", *str1);
    puts("-------------------------------------------------");

    while (*cp != '\0')
    {

        s1 = cp;
        s2 = str2;

        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
        {
            s1++;
            s2++;
        }

        if (*s2 == '\0')
            return cp;

        cp++;
    }
    return NULL;
}
int main()
{
    char str1[] = "barak ata yahol latet dogma";
    char str2[] = "ata";

    printf("%s %s\n", "str1 -> ", str1);
    printf("%s %s\n", "str2 -> ", str2);

    char *p = str_str(str1, str2);
    printf("%s %s\n", "str_str(str1, str2) -> ", p);

    return 0;
}