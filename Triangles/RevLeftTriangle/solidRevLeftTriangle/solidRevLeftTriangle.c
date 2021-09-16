/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/
#include<stdio.h>

void main() {
    int numRows = 7; // Number of rows
    int rowVal;     // for each value of row
    int colVal;     // for each value of columns
    char patternSymbol = '*'; // change it with any symbol of your choice

    for(rowVal = numRows; rowVal >= 1; rowVal--) { // from 7 => 1
        for (colVal = 1; colVal <= rowVal; colVal++) {
            printf("%c ", patternSymbol);
        }
        printf("\n"); // for separating each rows
    }
}
