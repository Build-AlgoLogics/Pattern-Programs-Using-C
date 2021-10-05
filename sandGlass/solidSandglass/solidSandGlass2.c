#include<stdio.h>

void main() {
    int numRows = 7;
    int rowVal; 
    int colVal; 
    int numSpaces = 0;
    int numPatternSymbols = numRows;

    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= numSpaces; colVal++) {
            printf("  "); 
        }
        for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
            printf("%c ", patternSymbol); 
        }
        if(rowVal <= numRows /2) {
            numSpaces++;
            numPatternSymbols -= 2;
        } else {
            numSpaces--;
            numPatternSymbols += 2;
        }
        printf("\n");
    }
}




































// #include<stdio.h>

// void main() {
//     int numRows =7; // for number of rows
//     int rowVal; // for each value of row
//     int colVal; // for each value of columns
//     int numSpaces = 0; // for number of spaces
//     int numPatternSymbols = numRows; // for number of symbols

//     // can be replaced by any symbol
//     char patternSymbol = '*';

//     // for printing each rows
//     for(rowVal = 1; rowVal <= numRows; rowVal++) {
//         // for printing spaces
//         for(colVal = 1; colVal <= numSpaces; colVal++) {
//             printf("  "); // 2 white spaces
//         }
//         // for printing pattern symbol (stars)
//         for (colVal = 1; colVal <= numPatternSymbols; colVal++) {
//             printf("%c ", patternSymbol);
//         }
//         // changing numSpaces and numPatternSymbols
//         // according to above values
//         if(rowVal <= numRows / 2) {
//             numSpaces++;
//             numPatternSymbols -= 2;
//         } else {
//             numSpaces--;
//             numPatternSymbols += 2;
//         }
//         printf("\n"); // for separating each rows
//     }
// }