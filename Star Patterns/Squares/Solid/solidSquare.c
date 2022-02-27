#include<stdio.h>

void main() {
    int numRows = 7;
    int colVal;
    int rowVal;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= numRows; colVal++) {
            printf("%c ", patternSymbol);
        }
        printf("\n");
    }
}
