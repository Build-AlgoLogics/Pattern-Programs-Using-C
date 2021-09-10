class solidReversedPyramid {
	public static void main (String[] args) {
        int numRows = 7;
        int temp = (numRows * 2) - 1; // temp = 13 in this case
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1; colVal < rowVal; colVal++) {
                System.out.print("  ");
            } 
            for(colVal = 1; colVal <= temp; colVal++) {
                System.out.print(" " + patternSymbol); // print() function for avoiding line break
            }
            temp -= 2;
            System.out.println(""); // println() For including line break after printing each row.
        }
    }
}


