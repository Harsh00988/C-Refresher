#include <stdio.h>

/* it is a bad programming practice to write many else if statements
insted we use switch statements.*/

int main(){
    char grade;

    printf("Enter a letter grade: ");
    scanf("%c", &grade);

    switch (grade){
        case 'A':
            printf("Perfect\n");
            break;
        case 'B':
            printf("You did good\n");
            break;
        case 'C':
            printf("You did okay\n");
            break;
        case 'D':
            printf("Atleast you didn't fail\n");
            break;
        case 'F':
            printf("Failed\n");
            break;
        default:
            printf("Invalid grade\n");
            break;

    }


    return 0;
}