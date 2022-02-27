#include<stdio.h>

void main() {
    int numRows = 5;
    int rowVal;
    int colVal;
    int numToPrint = 1;
    int incVal = 2;

    for(rowVal = 1; rowVal <= numRows; rowVal++) { 
        for(colVal = 1; colVal <= rowVal; colVal++) {
            if(rowVal % 2 == 1) {
                printf("%3d", numToPrint);
                numToPrint++;
            } else {
                printf("%3d", numToPrint);
                numToPrint--;
            }
        }
        numToPrint += incVal + ((rowVal % 2 == 1) ? -1 : 1);

        if(rowVal % 2 == 0) {
            incVal += 2;
        }

        printf("\n");
    }
}