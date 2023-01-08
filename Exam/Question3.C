#include <stdio.h>

int main()
{
    double radius,pi=3.14,diameter,circumference,area;

    printf("Enter the Radius:");
    scanf("%lf", &radius);

    diameter = 2 * radius;
    circumference = 2 * pi * radius;
    area = pi * radius * radius; 

    printf("The Diameter of a circle is %.2f\n", diameter);
    printf("The Circumference of a circle is %.2f\n", circumference);
    printf("The Area of a circle is %.2f\n", area);

    return 0;


}