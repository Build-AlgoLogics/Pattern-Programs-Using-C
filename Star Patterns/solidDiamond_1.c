#include<stdio.h>

void main() {
    int numRows = 7;
    int newNumRows = numRows / 2 + 1;
    int rowVal;
    int colVal;
    int temp = 1;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= newNumRows; rowVal++) {
        for(colVal = 1 ;colVal <= newNumRows - rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            printf("%c ", patternSymbol);
        }
        temp += 2;
        printf("\n");
    }

    temp -= 4;

    for(rowVal = 1; rowVal <= newNumRows - 1; rowVal++) { // 3 times
        for(colVal = 1; colVal <= rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            printf("%c ", patternSymbol);
        }
        temp -= 2;
        printf("\n");
    }
}


