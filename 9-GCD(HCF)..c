#include <stdio.h>

int main()
{
    int a, b, smaller;
    printf("Enter two numbers to find GCD of them: ");
    scanf("%d %d", &a, &b);

    if(a > b) smaller = b;
    else if(b > a) smaller = a;
    else smaller = a;

    for(; smaller>0; smaller--)
    {
        if(a % smaller == 0 && b % smaller == 0)
        {

            break;
        }

    }
    printf("GCD is: %d", smaller);

    return 0;

}
