#include <stdio.h>
#include <string.h>

int main(){

    char string1[] = "Harsh";
    char string2[] = "Goyal";

    /*
    strlwr(string) -> converts the string to lowercase
    strupr(string) -> converts the string to uppercase
    strcat(string1, string2) -> appends string2 to the end of string1
    strncat(string1, string2, n) ->  appends n characters from string2 to string1
    strcpy(string1, string2) -> copy string2 to string1
    strncpy(string1, string2, n) -> copy n characters of string2 to string1
    strset(string1, '?') -> sets all characters od a string to a given character
    strnset(string1, 'x', n) -> sets first n characters of a string to a given character
    strrev(string1) -> reverse the string
    strlen(string1) -> return string length as int
    strcmp(string1, string2) -> string compare all characters
    strncmp(string1, string2, n) -> string compare n characters
    strcmpi(string1, string2) -> string compare all (ignore case)
    strnicmp(string1, string1, n) -> string compare n characters (ignore case)
    */

    strlwr(string1);
    strupr(string1);
    strcat(string1, string2);
    strncat(string1, string2, 3);
    strcpy(string1, string2);
    strncpy(string1, string2, 3);
    strset(string1, '?');
    strnset(string1, 'x', 3);
    strrev(string1);

    int result = strlen(string1);
    // int result = strcmp(string1, string2);
    // int result = strncmp(string1, string2, 3);
    // int result = strcmpi(string1, string2);
    // int result = strnicmp(string1, string2, 3);
    
    if(result == 0){
        printf("Strings are equal\n");
    }
    else{
        printf("Strings are not equal\n");
    }

    printf("%s\n", string1);

    return 0;
}