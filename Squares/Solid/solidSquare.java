// Java program to print olid square pattern

class solidSquare {
	public static void main (String[] args) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1; colVal <= numRows; colVal++) {
                System.out.print(" " + patternSymbol); // print() function for avoiding line break
            }
            System.out.println(""); // println() For including line break after printing each row.
        }
    }
}


