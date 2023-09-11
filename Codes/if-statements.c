#include <stdio.h>

int main(){
    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if (age >= 18){
        printf("You are eligible for owning a debit card");
    }

    else if (age<0){
        printf("You haven't been born yet.");
    }

    else{
        printf("You are not eligible for owning a debit card");
    }

    return 0;
}