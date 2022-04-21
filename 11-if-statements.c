#include <stdio.h>

int main(){

    // if statements ✔️
    
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You are free to start your own life.\n");
    }
    else if (age == 0)
    {
        /* code */
        printf("You were just born! Please, breastfeed.\n");
    }
    
    else if (age < 0)
    {
        /* code */
        printf("You are unborn!\n");
    }
    
    else{
        printf("All under 18yrs live with their parents.\n");
    }

    return 0;
}