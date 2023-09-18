#include <stdio.h>

void hello(char[], int); //function prototype

int main(){
    /*function prototype
    Function declaration, w/o body, before main()
    Ensures that calls to a function are made with the correct arguments
    */

    /*
    Many C compilers do not check for the parameter matching
    Missing arguments will result in unexpected behavior
    A function prototype causes the compiler to flag an error if the arguments are missing
    */

    char name[] = "Harsh";
    int age = 20;

    hello(name, age);
    return 0; 
}

void hello(char name[], int age)
{
    printf("Hello, %s, you are %d years old.\n", name, age);
}