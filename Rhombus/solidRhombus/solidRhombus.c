#include<stdio.h>

void main() {
    int numRows = 7;
    int colVal;
    int rowVal;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {

        for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
            printf(" ");
        }

        for(colVal = 1; colVal <= numRows; colVal++) {
            printf("%c ", patternSymbol);
        }
        printf("\n");
    }
}


// //By Using if-else block...

// #include<stdio.h>

// void main() {
//     int numRows = 9;
//     int colVal;
//     int rowVal;
//     char patternSymbol = '*';

//     for(rowVal = 1; rowVal <= numRows; rowVal++) {
//         for(colVal = 1; colVal <= (numRows * 2) - rowVal; colVal++) {
//             if(colVal <= numRows - rowVal) {
//                 printf(" ");
//             } else {
//                 printf("%c ", patternSymbol);
//             }
//         }
//         printf("\n");
//     }
// }