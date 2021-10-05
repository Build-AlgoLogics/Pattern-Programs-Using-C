#include<stdio.h>

void main() {
    int numRows = 9;
    int rowVal;
    int colVal;
    int numSpaces = 0;
    int numPatternSymbols = numRows;

    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numSpaces; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
            if(colVal == 1 || colVal == numPatternSymbols || rowVal == 1 || rowVal == numRows) {
                printf("%c ", patternSymbol);
            } else if(colVal == (numPatternSymbols/2) + 1) {
                printf("%c ", patternSymbol);
            } else {
                printf("  ");
            }
        }
        if(rowVal <= numRows / 2) {
            numSpaces++;
            numPatternSymbols -= 2;
        } else {
            numSpaces--;
            numPatternSymbols += 2;
        }
        printf("\n");
    }
}