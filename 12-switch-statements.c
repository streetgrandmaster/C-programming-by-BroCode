#include <stdio.h>

int main(){

    // switch statements 🔽
    
    //switch = Efficient alternative to using many "else if" statements
    //          allows a value to be tested for equality against many cases.
    
    char grade;

    printf("\nPlease, enter your grade in alphabet: ");
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("Better!\n");
            break;
        case 'C':
            printf("Good!\n");
            break;
        case 'D':
            printf("At least, it's not an E!\n");
            break;
        case 'E':
            printf("You failed!\n");
            break;
        
        default:
            printf("Enter a valid grade!\n");
            break;
    }

    return 0;
}