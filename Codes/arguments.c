#include <stdio.h>

//functions cannot see inside other functions, so birthday cannot access anythong from main.
void birthday(char name[], int age){  // these are parameters, these are required by a function when we call it.
    printf("\nHappy Birthday dear %s!", name);
    printf("\nYou are %d years old!", age);
}

int main(){

    char name[] = "Bro";
    int age = 20;

    birthday(name, age); //these are arguments, which we send to the function are called arguments.
    return 0;
}