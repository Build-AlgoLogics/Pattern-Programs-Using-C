class zizZagNumberSquare {
	public static void main (String[] args) {
        int numRows = 5;
        int colVal;
        int rowVal;
        int numToPrint = 1;

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1; colVal <= numRows; colVal++) {
                if(rowVal % 2 == 1) {
                // Logic for Odd row

                // format() function for printing our formatted output
                System.out.format("%3d", numToPrint); 
                numToPrint++;
            } else {
                // Logic for Even row

                // format() function for printing our formatted output
                System.out.format("%3d", numToPrint);
                numToPrint--;
            }
            }
            // for true condition, it will returns -1 else return 1.
            numToPrint += numRows + ((rowVal % 2 == 1) ? -1 : 1);
            System.out.println(""); // println() For including line break after printing each row.
        }
    }
}