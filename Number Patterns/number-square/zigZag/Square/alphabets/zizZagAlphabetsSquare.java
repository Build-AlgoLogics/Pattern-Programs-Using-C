class zizZagAlphabetsSquare {
	public static void main (String[] args) {
        int numRows = 5;
        int colVal;
        int rowVal;
        int charToPrint = 0; // A => 65, Z => 90

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1; colVal <= numRows; colVal++) {
                if(rowVal % 2 == 1) {
                // Logic for Odd row

                // format() function for printing our formatted output
                System.out.format("%c ", 'A' + (charToPrint % 26)); 
                charToPrint++;
            } else {
                // Logic for Even row

                // format() function for printing our formatted output
                System.out.format("%c ", 'A' + (charToPrint % 26));
                charToPrint--;
            }
            }
            // for true condition, it will returns -1 else return 1.
            charToPrint += numRows + ((rowVal % 2 == 1) ? -1 : 1);
            System.out.println(""); // println() For including line break after printing each row.
        }
    }
}