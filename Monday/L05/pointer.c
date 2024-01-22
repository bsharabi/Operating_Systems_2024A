#include <stdio.h>
//          a=4, b=5
void swap(int a, int b)
{
    printf("swap:a -> %p\n", &a);
    printf("swap:b -> %p\n", &b);

    int temp = a;
    a = b;
    b = temp;
} // a=5, b=4

void swapWithAddress(int *a, int *b)
{
    printf("swap:a -> %p\n", a);
    printf("swap:b -> %p\n", b);

    int temp = *a;
    *a = *b;
    *b = temp;
} // *a=5, *b=4
int main(int argc, char const *argv[])
{
    // Person p = new Person("Barak","Sharabi");
    // Person pointPerson = p;

    // p.setName("b");

    // System.out,println(p.getName()); // -> b
    // System.out,println(pointPerson.getName()); //-> b

    // pointPerson.setName("b12");

    // System.out,println(p.getName()); // -> b12
    // System.out,println(pointPerson.getName()); //-> b12

    int i;
    printf("%d\n", i);
    printf("%p\n", &i);
    i = 10;
    printf("%d\n", i);
    printf("%p\n", &i);

    char ch = 'A'; // 01000001 d=65 c='A' x=41

    char str[30] = {'a', 'b', 'c'};
    char *pstr = str; // 11100000000000001000000011000000000010010001011

    printf("str -> %p\n", str);
    printf("&str -> %p\n", &str);

    printf("pstr -> %p\n", pstr);
    printf("&pstr -> %p\n", &pstr);

    printf("%c\n", str[0]);
    printf("%c\n", pstr[0]);
    printf("%c\n", *pstr);
    printf("%c\n", *++pstr);
    printf("%c\n", *pstr);

    int a = 4, b = 5;
    printf("a -> %d\n", a);
    printf("main:a -> %p\n", &a);
    printf("b -> %d\n", b);
    printf("main:b -> %p\n", &b);

    swap(a, b);

    printf("a -> %d\n", a);
    printf("b -> %d\n", b);

    printf("-----------------------------------------------\n");

    printf("a -> %d\n", a);
    printf("main:a -> %p\n", &a);
    printf("b -> %d\n", b);
    printf("main:b -> %p\n", &b);

    swapWithAddress(&a, &b);

    printf("a -> %d\n", a);
    printf("b -> %d\n", b);

    char str3[] = "1234321";
    char *left = str3;
    char *right = str3 + 6;

    while (left != right)
    {

        if (*left != *right)
        {
            printf("X");
            break;
        }
        left++;
        right--;
    }

    return 0;
}
