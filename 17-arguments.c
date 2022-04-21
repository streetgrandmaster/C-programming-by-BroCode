#include <stdio.h>


void birthday(char name[], int age) // Parameters
{
    printf("\nHappy birthday dear %s!", name);
    printf("\nYou are %d years old!\n", age);
}

int main(){

    // arguments
    
    char name[] = "Lawrence";
    int age = 25;

    birthday(name, age); // Arguments

    return 0;
}
