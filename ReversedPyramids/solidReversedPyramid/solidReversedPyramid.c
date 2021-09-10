#include<stdio.h>

void main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    int temp = (numRows * 2) - 1; // temp = 13 in this case
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal < rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            printf("%c ", patternSymbol);
        }
        temp -= 2;
        printf("\n");
    }
}


