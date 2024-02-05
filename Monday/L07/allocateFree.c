#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
{

    char ch;
    char *str;
    while (1)
    {
        printf("Enter number 1 or 2\n");
        ch = getchar();
        char temp;
        if (ch == '1')
        {
            getchar();
            int size = 1;
            int index = 0;
            str = (char *)malloc(size * sizeof(char));
            printf("Enter string 2\n");
            while ((temp = getchar()) != '\n')
            {
                *(str + index) = temp;
                index++;
                size++;
                str = (char *)realloc(str, size);
            }
            *(str + index) = '\0';
            puts(str);
            free(str);
        }
        else if(ch == '2')
        {
            printf("bye\n");
            break;
        }
      
    }

    return 0;
}