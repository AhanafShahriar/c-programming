#include <stdio.h>
int prime_checker(int n)
{
    int i;
    if(n == 2) return 1;
    if(n % 2 == 0) return 0;
    for(i=3; i<=n/2; i+=2)
    {
        if(n % i == 0) return 0;
    }
    return 1;
}
int main()
{
    int n;
    while(1)
    {
        printf("Enter a number to check if its prime or not (input 0 to exit): ");
        scanf("%d", &n);
        if(n == 0) break;
        else if(prime_checker(n) == 1) printf("the given number is prime.\n");
        else if(prime_checker(n) == 0) printf("the given number is not prime.\n");

    }
    return 0;

}
