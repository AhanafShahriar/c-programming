#include <stdio.h>

int main()
{
    int n;
    double x;

    x = 10.9;
    n = (int)x;
    //explicit typecasting. Occurs automatically if we dont write explicitly -- n = x; will work same.

    printf("Value of n is: %d\nValue of x is: %lf", n, x);
    return 0;
}
