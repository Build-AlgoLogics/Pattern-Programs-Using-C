/*** =====================================================================/
 *               * * * * * * *                                            *
 *                 * * * * *                                              *
 *                   * * *                                                *
 *                     *             Solid Sandglass Pattern              *
 *                   * * *                                                *
 *                 * * * * *                                              *
 *               * * * * * * *                                            *
 * =======================================================================*/

// Reversed solid pyramid...
#include<stdio.h>

void main() {
    int numRows = 7; 
    int newNumRows = numRows / 2 + 1; // 4
    int rowVal;
    int colVal;
    int temp = (newNumRows * 2) - 1; // temp = 13 in this case
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= newNumRows; rowVal++) {
        for(colVal = 1; colVal < rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            printf("%c ", patternSymbol);
        }
        temp -= 2;
        printf("\n");
    }
    
    temp = 3; // initial value for temp to print pyramid pattern.

    // this loop will run 3 times from 2 => 4, as 2 3 4
    for(rowVal = 2; rowVal <= newNumRows; rowVal++) { // newNumRows = 4 here
        for(colVal = 1 ;colVal <= newNumRows - rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            printf("%c ", patternSymbol);
        }
        temp += 2;
        printf("\n");
    }
}
