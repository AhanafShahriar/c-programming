#include <stdio.h>

int main ()
{
    int dividend, divisor, quotient, remainder;

    printf("Enter the Dividend: ");
    scanf("%d", &dividend);
    printf("Enter the Divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    remainder = dividend - divisor * quotient;

    printf("So, the remainder is: %d", remainder);

    return 0;

}
