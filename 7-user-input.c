#include <stdio.h>
#include <string.h>

int main(){

    // User inputs

    int name[25]; // bytes
    int age;

    printf("\nWhat is your name? ");
    // scanf("%s", &name);
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    
    printf("How old are you? ");
    scanf("%d", &age);

    printf("\nHello %s", name);
    printf("You are %d years old.\n", age);

    return 0;
}