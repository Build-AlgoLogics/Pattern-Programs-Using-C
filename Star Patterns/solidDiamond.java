/***====================================
 *               colVals               *
 *              1 2 3 4 5              *
 *  rowVal = 1      *                  *
 *  rowVal = 2    * * *                *
 *  rowVal = 3  * * * * *              *
 *  rowVal = 4    * * *                *
 *  rowVal = 5      *                  *
 *                                     *
 ***===================================*/

class solidDiamond {
	public static void main (String[] args) {
        int numRows = 7;
        int rowVal;
        int colVal;
        int numSpaces = numRows / 2;
        int numPatternSymbols = 1;

        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1 ;colVal <= numSpaces; colVal++) {
                System.out.print("  ");
            } 
            for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
                // print() function for avoiding line break
                System.out.print(" " + patternSymbol); 
            }
            if(rowVal <= numRows / 2) {
                numSpaces--;
                numPatternSymbols += 2;
            } else {
                numSpaces++;
                numPatternSymbols -= 2;
            }
            // println() For including line break after printing each row.
            System.out.println(""); 
        }
    }
}


