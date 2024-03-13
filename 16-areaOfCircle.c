#include <stdio.h>
double circle_area(double radius)
{
    double area = 3.1416 * radius * radius;

    return area;
}
int main()
{
    double r, area;

    printf("Enter radius of the circle: ");
    scanf("%lf", &r);

    area = circle_area(r);

    printf("%lf", area);
    return 0;
}
