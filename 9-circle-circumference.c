#include <stdio.h>

int main(){

    // circle circumference program ⚪

    const double PI = 3.14159;
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);

    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("If radius of a circle is: %lf\n", radius);
    printf("Circumference is: %lf\n", circumference);
    printf("Area is: %lf\n", area);

    return 0;
}