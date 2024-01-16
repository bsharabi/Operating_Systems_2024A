#include <stdio.h>
int my_strlen(char str[]);
void print(char str4[], int *i);
int main(int argc, char const *argv[])
{
    int i = 0;
    char str[] = {'a', 'b', 'c', 'd', 'f'};
    // char str[] = {'a', 'b', 'c', '\0'};
    printf("-----------str[] = {'a', 'b', 'c'}------------\n");
    while (str[i])
    {
        printf("%d -> %c\n", str[i], str[i]);
        i++;
    }

    printf("\n-----------str1[] = abc ------------\n");
    char str1[] = "abc";
    i = 0;
    while (str1[i])
    {
        printf("%d -> %c\n", str1[i], str1[i]);
        i++;
    }

    char str2[10] = {'a', 'b', 'c'};

    char str3[5];
    str3[0] = 'a';
    str3[1] = 'b';
    str3[2] = 'c';
    str3[3] = '\0';

    // cp -a -f <file> <file>
    char str4[] = {'c', 'p', '\0',
                   '-', 'a', '\0',
                   '-', 'f', '\0',
                   '<', 'f', 'i', 'l', 'e', '>', '\0',
                   '<', 'f', 'i', 'l', 'e', '>', '\0', '\0'};

    for (int i = 0; i < 10; i++)
    {
        printf("%p", str + i);
    }

    //
    printf("-----------str4[] = {'a', 'b', 'c','\\0', 'd', 'f'};------------\n");
    i = 0;
    printf("%d\n", i);

    print(str4, &i);
    printf("%d\n", i);
    print(str4, &i);
    printf("%d\n", i);
    int size, index;
    index = size = my_strlen(str4);
    printf("size - > %d\n", index);
    size++;
    size += index = my_strlen(str4 + size);
    printf("size - > %d\n", index);
    size++;
    size += index = my_strlen(str4 + size);
    printf("size - > %d\n", index);

    size++;
    size += index = my_strlen(str4 + size);
    printf("size - > %d\n", index);

    size++;
    size += index = my_strlen(str4 + size);
    printf("size - > %d\n", index);

    size++;
    size += index = my_strlen(str4 + size);
    printf("size - > %d\n", index);

    

    return 0;
}

void print(char str4[], int *index)
{
    while (str4[*index])
    {
        printf("%d -> %c\n", str4[*index], str4[*index]);
        (*index)++;
    }
    (*index)++;
}

int my_strlen(char str[])
{
    int cnt = 0, i = 0;
    while (str[i++] != '\0')
        cnt++;
    return cnt;
}
