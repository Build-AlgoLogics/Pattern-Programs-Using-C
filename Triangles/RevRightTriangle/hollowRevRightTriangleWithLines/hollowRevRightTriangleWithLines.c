#include<stdio.h>

void main() {
    int numRows = 9;
    int rowVal;
    int colVal;
    char patternSymbol = '*';

    for(rowVal = numRows; rowVal >= 1; rowVal--) {
        for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
            printf("  ");
        } 

        for(colVal = 1; colVal <= rowVal; colVal++) {
            if(colVal == 1 || colVal == rowVal || rowVal == numRows || rowVal%2==1) {
                printf("%c ", patternSymbol);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}
