#include<stdio.h>

void main() {
    int numRows = 7; // for number of rows
    int rowVal; // for each value of row
    int colVal; // for each value of columns
    int numSpaces = 0; // for number of spaces
    int numSymbols = numRows; // for number of symbols

    // can be replaced by any symbol
    char patternSymbol = '*';

    // for printing each rows
    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        // for printing spaces
        for(colVal = 1; colVal <= numSpaces; colVal++) {
            printf("  "); // 2 white spaces
        }

        // for printing pattern symbol
        for(colVal = 1; colVal <= numSymbols; colVal++) {
            printf("%c ", patternSymbol); // 1 extra space
        }
        // changing numSpaces and numSymbols
        // according to above values
        if(rowVal <= numRows /2) {
            numSpaces++;
            numSymbols -= 2;
        } else {
            numSpaces--;
            numSymbols += 2;
        }
        printf("\n");// for separating each row
    }
}

