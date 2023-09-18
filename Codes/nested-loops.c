#include <stdio.h>

int main(){
    // nested loop -> loop inside of another loop


    int rows;
    int columns;
    char symbol;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &columns); //we have \n in our input buffer

    scanf("%c");

    printf("Enter symbol: ");
    scanf("%c", &symbol);

    for(int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= columns; j++)
        {
            printf("%c", symbol);
        }
        printf("\n");
    }

    return 0;
}