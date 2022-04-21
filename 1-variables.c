#include <stdio.h>

int main(){

    /**
     * Variables = Allocated space in memory to store a value. 
     *             We refer to a variable's name to access the stored value.
     *             That variable now behaves as if it was the value it contains.
     *             But we need to declare what type of data we are storing.
     */

    int x; // Declaration
    x = 124; // Initialization

    int y = 123; // Declaration & Initialization

    int age = 27; // Integer
    float gpa = 2.9; // Floating point number
    char grade = 'A'; // Single charater
    char name[] = "Lawrence"; // Array of characters

    printf("I am %d years old.\n", age); // d = integer
    printf("My GPA is %f\n", gpa); // f = float
    printf("My average grade is %c\n", grade); // c = character
    printf("I am called %s", name); // s = string

    return 0;
}