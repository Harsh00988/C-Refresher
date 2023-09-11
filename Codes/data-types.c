#include <stdio.h>
#include <stdbool.h> //header file to import bool type

int main() {
    char a = 'C';  // single character -> %c
    char b[] = "Pika-Pika Pikachuu"; // Array of characters -> %s

    float c = 3.14; // Floating point number -> %f -> 4 bytes(32- bit of precision) 6-7 digits
    double d = 3.1415926535897932384626433; //double -> %lf -> 8 bytes (64-bits of precision) 15-16 digits
    bool e = true; // Boolean -> %d (true or false) -> 1 byte 
    /*bool doesn't have any specific format specifer in C. However, since any integral type that
    is shorter than int is promoted to int. This is the reason the format specifier of bool is %d.*/

    char f =100; //%d or %c -> character -> 1 byte(-128-127)
    unsigned char g = 255; //%d or %c -> 1 byte (0 - 255)
    short int h = 32767; //%d or %c -> 2 bytes (-32768 - 32,767)
    unsigned short int i = 65535; //%d or %c -> 2 bytes (0 - 65,535)
    int j = 214324234; //%d -> 4 bytes (-2,147,483,648 - 2,147,483,648) 
    unsigned int k = 4294967295; //%u -> 4 bytes (0 - 4,294,967,295)
    long long int l = 456578978451249613; //%ld -> 8 bytes (-9 quintillion to 9 quintillion
    unsigned long long int m = 123456789123456789; //%llu ->8 bytes (0 - 18 quintillions)

    /*format-specifiers: 
    %c -> character
    %s -> array of characters -> string
    %f -> float
    %lf -> double
    %d -> integer
    
    %.1 -> decimal precision
    %1 -> minimum field width
    %- -> left align*/


    printf("a = %c\n", a);
    printf("b = %s\n", b); 
    printf("c = %f\n", c); 
    printf("d = %lf\n", d); 
    printf("e = %d\n", e); 
    printf("f = %d\n", f); 
    printf("g = %d\n", g); 
    printf("h = %d\n", h); 
    printf("i = %d\n", i); 
    printf("j = %d\n", j); 
    printf("k = %u\n", k); 
    printf("l = %lld\n", l); 
    printf("m = %llu\n", m);

    return 0;

}