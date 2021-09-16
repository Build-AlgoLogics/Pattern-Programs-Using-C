/* =======================================================================/
*  ------------    Hollow Triangle Pattern With Square    ----------------*
*       Conditions:                                                       *
*               rowVal == (numRows / 2) + 1                               *
*               colVal == (numRows / 2) + 1                               *
** ======================================================================*/

#include<stdio.h>

void main() {
    int numRows = 7; 
    int rowVal;     
    int colVal;   
    char patternSymbol = '*'; 

    for(rowVal = numRows; rowVal >= 1; rowVal--) {
        for(colVal = 1; colVal <= rowVal; colVal++) {
            if(colVal == 1 || colVal == rowVal || rowVal == numRows) {
                printf("%c ", patternSymbol);
            } else if(rowVal == (numRows / 2) + 1 || colVal == (numRows / 2) + 1) {
                printf("%c ", patternSymbol);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}