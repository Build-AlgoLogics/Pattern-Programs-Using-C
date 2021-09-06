#include<stdio.h>

void main() {
    int numRows = 9;
    int rowVal;
    int colVal;
    int temp = 2;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= rowVal; colVal++) {
            if(colVal == 1 || colVal == rowVal || rowVal == numRows) {
                printf("%c ", patternSymbol);
            } else if(colVal == (numRows/2) + 1 || rowVal == (numRows / 2) + 1) {
                printf("%c ", patternSymbol);
            } else if(rowVal == (numRows/2) + temp && colVal == temp) {
                printf("%c ", patternSymbol);
                temp++;
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
}

