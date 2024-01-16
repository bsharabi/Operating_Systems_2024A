#include <stdio.h>
#define SIZE 10
#define true 1
#define false 0

int main()
{
    // int[] arr = new int[10];
    int arr[10];

    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
    printf("%d\n", arr[5]);
    printf("%d\n", arr[6]);
    printf("%d\n", arr[7]);
    printf("%d\n", arr[8]);
    printf("%d\n", arr[9]);
    printf("%d\n", arr[10]);
    printf("%d\n", arr[11]);

    for (int i = 0; i < 11; i++)
    {
        printf("%p\n", arr + i);
    }

   
    int arr1[SIZE] = {0, 2, 3, 4, 5, 7};


    printf("%ld\n",sizeof(int)); // 4
    printf("%ld\n",sizeof(float)); // 4
    printf("%ld\n",sizeof(double));// 8
    printf("%ld\n",sizeof(char));// 1
    printf("%ld\n",sizeof(arr));// ARR LEN = 10 * 4 = 40
    printf("%ld\n",sizeof(arr+1)); // 8

    while(0){

    }
    

    return 0;
}
/*
  %c character
  %d decimal (integer) number(base 10)
  % e exponential floating -point number
  % f floating - point number
  % i integer(base 10)
  % o octal number (base 8)
  %s String
  %u unsigned decimal(integer) number
  % x number in hexadecimal(base 16)
  % t formats date/time
  %%print a percent sign
  \%print a percent sign
*/