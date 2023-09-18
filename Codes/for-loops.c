#include <stdio.h>

int main(){
    // for loop = repeats a section of code based on some condition until the condition becomes false

    for(int i = 10; i > 0; i-=2){  // for(counter/index variable, condition, increment or decrement)
        printf("%d\n", i);
    }
    return 0;
}