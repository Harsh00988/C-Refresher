#include <stdio.h>

double square(double x){
    double result = x*x;
    return result;
}

int main(){
    double x = square(3.14);
    printf("x = %f\n", x);


//return = returns are value back to a calling function
return 0; 
}