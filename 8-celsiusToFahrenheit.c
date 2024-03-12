#include <stdio.h>
/*

The issue in your code lies in the expression (9/5) within the calculation of Fahrenheit. In C, when you perform division with two integers, the result will be an integer, rounded towards zero. In this case, 9/5 will result in 1, not 1.8 as expected in floating-point arithmetic.

To fix this issue, you need to ensure that at least one of the operands is a floating-point number so that the division results in a floating-point value. You can do this by changing 9/5 to 9.0/5.0 or 9.0/5 or 9/5.0.
*/
int main()
{
    double celsius, fahrenheit;
    printf("Enter Temperature in celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * (9/5.0)) + 32;

    printf("Temperature in fahrenheit is: %.2lf degree fahrenheit", fahrenheit);

    return 0;
}
