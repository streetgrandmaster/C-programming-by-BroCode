#include <stdio.h>
#include <ctype.h>

int main(){

    // temperature conversion program 🌡️

    char unit;
    float temperature;

    printf("\nIs the temperature in (F) or (C): ");
    scanf("%c", &unit);

    unit = toupper(unit);

    if (unit == 'C'){
        /* code */
        printf("\nEnter temperature in Celsius: ");
        scanf("%f", &temperature);

        temperature = (temperature * 9/5) + 32;

        printf("\nThe temperature in Fahrenheit is: %.2fF\n", temperature);
    }
    else if (unit == 'F'){
        /* code */
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f", &temperature);

        temperature = ((temperature - 32) * 5) / 9;

        printf("\nThe temperature in Celsius is: %.2fC\n", temperature);
    }
    else{
        printf("Invalid input, please try again!\n");
    }

    return 0;
}