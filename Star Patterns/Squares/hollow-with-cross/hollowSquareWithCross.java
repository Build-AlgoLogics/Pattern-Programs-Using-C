public class hollowSquareWithCross {
    public static void main (String[] args) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1; colVal <= numRows; colVal++) {
                if(colVal==1 || rowVal==1 || colVal == numRows || rowVal == numRows) {
                    System.out.print(" " + patternSymbol);   // print() function for avoiding line break
                }else if(colVal == (numRows/2) + 1 || rowVal == (numRows/2) + 1) {
                    System.out.print(" " + patternSymbol); 
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println(""); // println() For including line break after printing each row.
        }
    }
}
