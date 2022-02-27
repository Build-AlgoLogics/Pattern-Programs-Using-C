class hollowSandGlass {
	public static void main (String[] args) {
        int numRows = 7;
        int rowVal;
        int colVal;
        int numSpaces = 0;
        int numPatternSymbols = numRows;

        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1 ;colVal <= numSpaces; colVal++) {
                System.out.print("  ");
            } 
            for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
                if(colVal == 1 || colVal == numPatternSymbols) {
                    System.out.print(" " + patternSymbol); // print() function for avoiding line break
                } else if(rowVal == 1 || rowVal == numRows) {
                    System.out.print(" " + patternSymbol); // print() function for avoiding line break
                } else {
                    System.out.print("  ");
                }
               }
            if(rowVal <= numRows / 2) {
                numSpaces++;
                numPatternSymbols -= 2;
            } else {
                numSpaces--;
                numPatternSymbols += 2;
            }
            System.out.println(""); // println() For including line break after printing each row.
        }
    }
}


