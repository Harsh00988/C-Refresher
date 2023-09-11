#include <stdio.h>

int main(){
    /*
    arithmetic operators:
    + addition
    - subtraction
    * multiplication
    / division
    % modulus
    ++ increment
    -- decrement
    */

   int x = 7;
   int y = 29;
   int k = x*y;
   double z = y / (float) x; // explicit type casting
   int l = y % x; 

   printf("%d\n", k);
   printf("%lf\n",z);
   printf("%d",l);
    return 0;
}