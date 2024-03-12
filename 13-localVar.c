#include <stdio.h>

int test(int x)
{
    int  y = x;
    x = y * 20;
    return x;
}
//x, y of main and x, y of test are different
//cz they are declared locally only in their respective functions
int main()
{
    int x = 10, y = 20, z = 30;
    z = test(10);
    printf("%d %d %d", x, y, z);
    return 0;
}
