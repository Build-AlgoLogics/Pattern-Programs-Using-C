#include<stdio.h>

void main() {
    int numRows = 7; // number of times the outer loop will runs
    int rowVal;     // for each value of row
    int colVal;     // for each value of column
    char patternSymbol = '*';   // if you want, then you can change this value with any symbol of your choice.

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= rowVal; colVal++) {
            printf("%c ", patternSymbol);
        }
        printf("\n");
    }
}