#include<stdio.h>

void main() {
    int numRows = 5;
    int rowVal;
    int colVal;
    int numToPrint = 1;
    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= numRows; colVal++) {
            if(rowVal % 2 == 1) {
                // Logic for Odd row
                printf("%3d", numToPrint);
                numToPrint++;
            } else {
                // Logic for Even row
                printf("%3d", numToPrint);
                numToPrint--;
            }
        }
        // for true condition, it will returns -1 else return 1.
        numToPrint += numRows + ((rowVal % 2 == 1) ? -1 : 1);
        printf("\n");
    }
}