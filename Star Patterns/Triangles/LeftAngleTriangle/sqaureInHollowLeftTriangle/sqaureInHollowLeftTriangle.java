public class sqaureInHollowLeftTriangle {
        public static void main(String args[]) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1; colVal <= rowVal; colVal++) {
                if(colVal == 1 || colVal == rowVal || rowVal == numRows) {
                    System.out.print(patternSymbol + " ");
                } else if(colVal == (numRows/2) + 1 || rowVal == (numRows / 2) + 1) {
                    System.out.print(patternSymbol + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println(""); 
        }
    }
}
