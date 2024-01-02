#include "mat.h"

int factorial(int n)
{
    int mul = 1;
    for (int i = 1; i <= n; i++)
    {
        mul *= i;
    }
    return mul;
}
int sum(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
int max(int a, int b)
{
    return (a > b) ? a : b;
}
int _pow(int base, int exp)
{

    int p = base;
    for (int i = 0; i < exp - 1; i++)
    {
        p *= base;
    }

    return p;
}
