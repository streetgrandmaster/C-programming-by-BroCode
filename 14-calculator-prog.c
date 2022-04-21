#include <stdio.h>
#include <math.h>

int main(){

    // calculator program 🖩

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+, -, *, /): ");
    scanf("%c", &operator);

    printf("\nEnter number 1: ");
    scanf("%lf", &num1);

    printf("\nEnter number 2: ");
    scanf("%lf", &num2);

    switch (operator){
        case '+':
            /* code */
            result = num1 + num2;
            printf("The sum is: %lf\n", result);
            break;
        
        case '-':
            /* code */
            result = num1 - num2;
            printf("The difference is: %lf\n", result);
            break;

        case '*':
            /* code */
            result = num1 * num2;
            printf("The product is: %lf\n", result);
            break;

        case '/':
            /* code */
            result = num1 / num2;
            printf("The result is: %lf\n", result);
            break;

        default:
            printf("%c is not valid!\n", operator);
            break;
        }

    return 0;
}