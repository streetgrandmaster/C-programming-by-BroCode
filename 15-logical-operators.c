#include <stdio.h>
#include <stdbool.h>

int main(){

    // logical operators &&, ||, !
    //      AND logical operator && = Checks if both of the conditions are met.
    //      OR logical operator || = Checks if either of the conditions are met.
    //      NOT logical operator ! = Checks if neither of the conditions are met.


    float temperature = 50;
    bool sunny = false;


    // // &&
    // if (temperature >= 20 && temperature <= 45 && sunny){
    //     /* code */
    //     printf("\nThe temperature is good.\n");
    // }else{
    //     printf("\nThe temperature is bad!\n");
    // }
    

    // // ||
    // if (temperature < 20 || temperature > 45){
    //     /* code */
    //     printf("\nThe temperature is bad!\n");
    // }else{
    //     printf("\nThe temperature is good.\n");
    // }


    // !
    if (!sunny){
        /* code */
        printf("\nThe temperature is bad!\n");
    }else{
        printf("\nThe temperature is good.\n");
    }

    return 0;
}