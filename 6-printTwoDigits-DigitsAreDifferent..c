/*
Problem: Take a two digit number(10-99) as input n times
Print the number from 10-m where two digits are not the same
*/
#include <stdio.h>

int main()
{
    int n, m, i, j;
    printf("How many inputs? ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter a two-digit number (10-99): ");
        scanf("%d", &m);

        for(j = 10; j <= m; j++)
        {
            if(j % 11 == 0) continue;
            else printf("%d\n", j);
        }
    }

    return 0;

}
