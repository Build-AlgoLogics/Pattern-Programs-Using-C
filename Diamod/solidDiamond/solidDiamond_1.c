// Pyramid pattern
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
    // temp value will be 1 here.
    // printf("%d", temp);
    temp -= 4;
    //temp = (numRows * 2) - 1; // temp = 13 in this case

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


