#include <stdio.h>
double PI = 3.14;

double my_func()
{
    PI = 3.1416;
    return PI;
}
int main()
{
    printf("before calling my_func-PI is: %lf\n", PI);//3.14
    my_func();
    printf("after calling my_func-PI is: %lf\n", PI);//3.1416
    return 0;
}
