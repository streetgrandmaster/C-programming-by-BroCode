#include <stdio.h>
#include <math.h>

int main(){

    // hypotenuse calculator program 📐

    double A;
    double B;
    double C;

    printf("Enter side A: ");
    scanf("%lf", &A);

    printf("Enter side B: ");
    scanf("%lf", &B);

    C = sqrt(A*A + B*B);

    printf("Side C is: %lf\n", C);

    return 0;
}