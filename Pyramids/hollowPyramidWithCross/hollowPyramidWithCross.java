class hollowPyramidWithCross {
	public static void main (String[] args) {
        int numRows = 7;
        int temp = 1;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
                System.out.print("  ");
            } 
            for(colVal = 1; colVal <= temp; colVal++) {
                if(colVal == 1 || rowVal == numRows || colVal == temp) {
                    System.out.print(" " + patternSymbol); // print() function for avoiding line break
               } else if (colVal == rowVal || rowVal == (numRows/2) + 1) {
                System.out.print(" " + patternSymbol);
               } else {
                System.out.print("  ");
               }
            }
            temp += 2;
            System.out.println(""); // println() For including line break after printing each row.
        }
    }
}


