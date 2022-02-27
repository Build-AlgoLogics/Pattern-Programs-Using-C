#include<stdio.h>

void main() {
    int numRows = 5;
    int rowVal;
    int colVal;
    //int numToPrint = 1;
    int charToPrint = 0;
    int incVal = 2;

    for(rowVal = 1; rowVal <= numRows; rowVal++) { 
        for(colVal = 1; colVal <= rowVal; colVal++) {
            if(rowVal % 2 == 1) {
                printf("%c ", 'A' + (charToPrint % 26));
                charToPrint++;
            } else {
                printf("%c ", 'A' + (charToPrint % 26));
                charToPrint--;
            }
        }
        
        charToPrint += incVal + ((rowVal % 2 == 1) ? -1 : 1);

        if(rowVal % 2 == 0) {
            incVal += 2;
        }

        printf("\n");
    }
}