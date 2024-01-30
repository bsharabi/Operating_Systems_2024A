#include <stdio.h>
#include <string.h>
#include <ctype.h>

char *str_str(char *str1, char *str2)
{
    if (*str2 == '\0')
        return str1;

    char *cp = str1, *s1 = NULL, *s2 = NULL;
    //  "Hello world";
    //  "lo";
    // *cp = H
    // *s1 = ''
    // *s2 = ''

    while (*cp)
    {

        s1 = cp;
        s2 = str2;

        // iter-1
        // *cp = H
        // *s1 = H
        // *s2 = l

        // iter-2
        // *cp = e
        // *s1 = e
        // *s2 = l

        // iter-3
        // *cp = l
        // *s1 = l
        // *s2 = l

        // iter-4
        // *cp = l
        // *s1 = l
        // *s2 = l

        while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
        {
            s1++;
            s2++;
            // iter-3.1
            // *cp = l(first l)
            // *s1 = l(second l)
            // *s2 = o

            // iter-4.1
            // *cp = l
            // *s1 = o
            // *s2 = o

            // iter-4.2
            // *cp = l
            // *s1 = ' '
            // *s2 = '\0'
        }

        if (*s2 == '\0')
            return cp;

        cp++;
    }

    return NULL;
}
char *str_strLoop(char *str1, char *str2)
{

    for (int i = 0; i < strlen(str1); i++)
    {
        int j = 0;
        for (; j < strlen(str2); j++)
        {
            if (str1[i + j] != str2[j])
            {
                break;
            }
        }
        if (str2[j] == '\0')
            return str1 + i;
    }

    return NULL;
}
int main()
{
    char str1[] = "Hello world";
    char str2[] = "lol";

    puts(str1);
    puts(str2);
    printf("-----------------str_str----------------------\n");
    char *p = str_str(str1, str2);

    puts((p==NULL)?"NULL":p);

    printf("-----------------str_strLoop----------------------\n");
    p = str_strLoop(str1, str2);
    puts((p==NULL)?"NULL":p);

    return 0;
}