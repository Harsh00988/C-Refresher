#include <stdio.h>

int main(){
    /*
    augmented assignment operators / short hand operators - 
    used to replace a statement where an operator takes a varible
    as one of its arguments and then assigns the results back to the 
    same variable.
    Ex: x = x+1
    x+=1*/

    int x = 10;
    x+=2;
    x-=3; 
    x*=4;
    x/=5;

    printf("x = %d", x);

    return 0;
}