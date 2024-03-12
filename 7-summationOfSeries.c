#include <stdio.h>
/*
find total of 1+2+3+....+1000
*/
int main()
{
    //using formula (n*(n+1)) / 2;
    int n = 1000, res;
    res = (n*(n+1)) / 2;
   // printf("Summation of the series(1+2+3+....+1000) = %d", res);


    //using loop
    res = 0;
    for(int i=1; i<=1000; i++)
    {
        res+=i;
    }
     printf("Summation of the series(1+2+3+....+1000) = %d", res);

}
