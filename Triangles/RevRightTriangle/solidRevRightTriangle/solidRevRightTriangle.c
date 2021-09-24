#include<stdio.h>

void main() {
    int numRows = 7; 
    int rowVal;     
    int colVal;     
    char patternSymbol = '*';   

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
            printf("  ");
        } 

        for(colVal = 1; colVal <= rowVal; colVal++) {
            printf("%c ", patternSymbol);
        }
        printf("\n");
    }
}

