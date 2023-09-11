#include <stdio.h>
/*variable  -> Allocate space in memory to store a value.
                We refer to variable's name to access the stored value.
                That variable behaves as if it was the value it contains.
                but we need to declare what type of data we are storing*/
int main(){
    int x; //declaration -> creating space in memory
    x= 10; // initialization -> storing a value in variable.
    int y= 10; // declration and initialization in same line.

    int age = 20; //integer
    float gpa = 3.75; //float
    char average_grade ='A'; //single characters
    /* there are no strings in C as strings are basically objects 
    and C is not an OOP language */
    char pokemon[] = "Gengar"; //array of characters

// % is a format specifier in C and used to print/scan values in variable
    printf("Hello %s\n", pokemon); // %s -> Array of characters (Strings)
    printf("Goyal is %d years old\n", age); // %d -> integers
    printf("Goyal's average grade is %c\n", average_grade); // %c -> characters
    printf("Goyal's GPA is %.2f\n", gpa); // %f -> float -> %.nf for n digits after decimal

    return 0;
}