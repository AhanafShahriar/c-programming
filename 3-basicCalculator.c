#include <stdio.h>

int main()
{
    double num1, num2, result;
    char symbol;

    printf("Enter a number: ");
    scanf("%lf", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    symbol = '+';
    result = num1 + num2;
    printf("%.2lf %c %.2lf = %.2lf\n", num1, symbol, num2, result);

    symbol = '-';
    result = num1 - num2;
    printf("%.2lf %c %.2lf = %.2lf\n", num1, symbol, num2, result);

    symbol = '*';
    result = num1 * num2;
    printf("%.2lf %c %.2lf = %.2lf\n", num1, symbol, num2, result);

    symbol = '/';
    result = num1 / num2;
    printf("%.2lf %c %.2lf = %.2lf\n", num1, symbol, num2, result);

    return 0;

}
