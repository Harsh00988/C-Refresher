#include <stdio.h>
#include <string.h>

int main(){
    /*
    while loop -> repeats a section of code until the condtion is false
    a while loop might not execute at all
    */

    char name[25]; 
    printf("What is your name?\n");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';

    while(strlen(name)==0)   //while(condition){}
    {
        printf("\nYou did not enter your name");
        printf("\nWhat is your name?\n");
        fgets(name, 25, stdin);
        name[strlen(name)-1] = '\0';
    }

    printf("Hello %s\n", name);


}