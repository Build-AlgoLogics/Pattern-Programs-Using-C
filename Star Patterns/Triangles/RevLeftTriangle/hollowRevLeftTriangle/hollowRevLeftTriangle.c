/* =======================================================================/
*  --------------------    Hollow Triangle Pattern    --------------------*
*       Conditions:                                                       *
*               colVal == 1                                               *
*               rowVal == numRows                                         *
*               rowVal == colVal                                          *
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
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}