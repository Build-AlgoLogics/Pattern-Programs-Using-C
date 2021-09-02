/***=================================================================================================================
 *  print star or symbolPattern if                                                                                  *
 *  - colVal = 1                                                                                                    *
 *  - colVal = numRows                                                                                              *
 *  - rowVal = 1                                                                                                    *
 *  - rowVal = numRows                                                                                              *
 *                                                                                                                  *
 *  else print spaces.....                                                                                          *
 *                                                                                                                  *
 ***================================================================================================================= */
#include<stdio.h>

void main() {
    int numRows = 7;
    int colVal;
    int rowVal;
    char patternSymbol = '*';
    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= numRows; colVal++) {
            if(colVal==1 || rowVal==1 || colVal == numRows || rowVal == numRows) {
                printf("%c ", patternSymbol);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
