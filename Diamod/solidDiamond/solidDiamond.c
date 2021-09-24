#include<stdio.h>

void main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    int numSpaces = numRows / 2;
    int numPatternSymbols = 1;

    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numSpaces; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
            printf("%c ", patternSymbol);
        }
        if(rowVal <= numRows / 2) {
            numSpaces--;
            numPatternSymbols += 2;
        } else {
            numSpaces++;
            numPatternSymbols -= 2;
        }
        printf("\n");
    }
}