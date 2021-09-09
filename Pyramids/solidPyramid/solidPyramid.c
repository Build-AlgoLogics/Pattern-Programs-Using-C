#include<stdio.h>

void main() {
    int numRows = 9;
    int rowVal;
    int colVal;
    int temp = 1;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            printf("%c ", patternSymbol);
        }
        temp += 2;
        printf("\n");
    }
}


