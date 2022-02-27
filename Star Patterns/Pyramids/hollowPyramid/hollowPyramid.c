#include<stdio.h>

void main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    int temp = 1;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            if(colVal == 1 || rowVal == numRows || colVal == temp) {
                printf("%c ", patternSymbol);
            } else {
                printf("  ");
            }
        }
        temp += 2;
        printf("\n");
    }
}
