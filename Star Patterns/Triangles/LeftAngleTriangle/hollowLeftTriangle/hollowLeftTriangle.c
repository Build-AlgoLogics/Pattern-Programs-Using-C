/***=================================================================================================================
 *  print star or symbolPattern if                                                                                  *
 *  - colVal == 1                                                                                                   *
 *  - rowVal == numRows                                                                                             *
 *  - colVal = rowVal                                                                                                    *
 *                                                                                                                  *
 *  else print spaces.....                                                                                          *
 *                                                                                                                  *
 ***================================================================================================================= */

#include<stdio.h>

void main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
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
