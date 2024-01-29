#include <stdio.h>
#include <string.h>
#include <ctype.h>

int word_cnt(char *str)
{
    int counter = 0;

    if (*str == '\0')
        return 0;

    while (*str)
    {
        if (*str == ' ')
            counter++;
        str++;
    }

    return ++counter;
}

int main()
{
    char str[] = "Hello bar good morning";
    printf("%s\n",str);
    
    int countWord = word_cnt(str);
    printf("word_cnt(str) -> %d\n",countWord);
    
    return 0;
}