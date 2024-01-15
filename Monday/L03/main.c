#include <stdio.h>
#define SIZE 4
int main()
{
  
    int arr[SIZE];

    printf("\n%p", arr);
    printf("\n%p", arr + 1);
    printf("\n%p", arr + 2);
    printf("\n%p", arr + 3);
    printf("\n%p\n", arr + 4);
    printf("\n%p\n", arr + 5);
    printf("\n%p\n", arr + 6);
    printf("\n%p\n", arr + 7);
    printf("\n%p\n", arr + 8);

    printf("\n%d", arr[0]); 
    printf("\n%d", arr[1]);
    printf("\n%d", arr[2]);
    printf("\n%d", arr[3]);
    printf("\n%d\n", arr[4]);
    printf("\n%d\n", arr[5]);
    printf("\n%d\n", arr[6]);
    printf("\n%d\n", arr[7]);
    printf("\n%d\n", arr[8]);

    arr[0] = 1;
    arr[1] = 10;
    arr[2] = 100;
    arr[3] = 1000;
    arr[4] = 10000;

    printf("\n%d", arr[0]);
    printf("\n%d", arr[1]);
    printf("\n%d", arr[2]);
    printf("\n%d", arr[3]);
    printf("\n%d\n", arr[4]);
    printf("-----------------------");
    arr[5] = 100000;
    printf("\n%d\n", arr[5]);
    printf("-----------------------");
    printf("\n%d\n", arr[6]);
    printf("\n%d\n", arr[7]);
    printf("\n%d\n", arr[8]);

    printf("%d%d %d %d %d\n", 1, 2, 3, 4, 5);


    printf("%ld\n",sizeof(int));
    printf("%ld\n",sizeof(arr));
    printf("%ld\n",sizeof((arr+1)));
    
 
    
    return 0;
}
