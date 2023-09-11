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
   int j = x++;

   printf("%d\n", k);
   printf("%lf\n",z);
   printf("%d\n",l);
   printf("%d\n",j);
    return 0;
}