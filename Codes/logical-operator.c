#include <stdio.h>
#include <stdbool.h>

int main(){
        /* 
    Logical Operator: 
    && - logical AND (all conditions should be true)
    || - logical OR (atleast one condition must be)
    ! - logical NOT
    */
    int temp = 25;
    bool sunny = true;

    if(temp>=0 && temp<=30 && sunny){
        printf("The weather is good");
    }
    else{
        printf("The weather is bad");
    }

    //Similarly we can use all logical operators.

    return 0;
}