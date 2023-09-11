#include <stdio.h>
#include <string.h> // this is for removing implicit \n from the fgets function.

int main(){
    char name[25]; //25 byte size, if user goes beyond this it will cause buffer-overflow.
    int age;

    printf("What is your name:\n");
    //scanf("%s",&name); 
    /*scanf will only take upto white spaces, if we enter a white space it
    execute all statements and not ask for next user input*/
    fgets(name, 25, stdin); 
    name[strlen(name)-1] = '\0'; //removing new line from the end of the string
    /*fgets will take user input till it finds a new line and it requires
    3 parameters which are variable name, input size and stdin respectively. */

    printf("How old are you?\n"); //printing message for user
    scanf("%d", &age); // scanf is used to take user input
    /*In C, function parameters are always pass-by-value which means
    that the function scanf only sees a copy of current value of whatever
    you specify as the argument expression.
    In this case, &age refers to the variable age, scanf can use to modify this.
    Also, age is not local to scanf, that is the reason we need to specify the address.*/
    
    printf("Hello %s", name);
    printf(", You are %d years old", age);
    return 0;
}