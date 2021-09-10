#include<stdio.h>

void main() {
    int numRows = 9;
    int rowVal;
    int colVal;
    int temp = (numRows * 2) - 1;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= rowVal; colVal++) {
            printf("  ");
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
         if(rowVal == 1 || colVal == 1 || colVal == temp) {
                printf("%c ", patternSymbol);
            } else {
                printf("  ");
            }
        }
        temp -= 2;
        printf("\n");
    }
}


