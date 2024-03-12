#include <stdio.h>

int main() {
    int i, j, res;
    for(i = 1; i < 21; i++)
    {
        printf("\nMultiplication Table for: %d\n", i);
        res = 0;
        for(j = 1; j < 11; j++)
        {
            res += i;
            printf("%d * %d = %d\n", i, j, res);
        }
    }

    return 0;
}
