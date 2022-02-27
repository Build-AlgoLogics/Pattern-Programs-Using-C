/***====================================
 *  print star or symbolPattern if     *
 * - colVal == 1                       *
 * - colVal = n                        *
 * - rowVal = 1                        *
 * - rowVal = numRows                  *
 * - colVal == rowVal                  *
 * - (rowVal + colVal) == (numRows +1) *
 *  else print spaces.....             *
 *                                     *
 *               colVals               *
 *              1 2 3 4 5              *
 *  rowVal = 1  * * * * *              *
 *  rowVal = 2  * *   * *              *
 *  rowVal = 3  *   *   *              *
 *  rowVal = 4  * *   * *              *
 *  rowVal = 5  * * * * *              *
 *                                     *
 ***===================================*/
#include<stdio.h>
int main() {
    // Change this value of your choice 
    // or take input from user.
    int n = 7; // numRows
    int i; // here 'rowVal' (less space)
    int j; // here 'colVal' (less space)

    // change this symbol with any 
    // valid symbole to print pattern of!
    char patternSymbol = '*';
	
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n; j++) {
                // conditions for printing 4 sides only
            if(j==1 || i==1 || j == n || i == n) {
                printf("%c ", patternSymbol);
                // conditions to print both diagonals
            } else if(j == i || (i + j) == (n +1)) { 
				printf("%c ", patternSymbol);
			} else {
                printf("  ");
            }
        }
        printf("\n");
    }
	return 0;
}