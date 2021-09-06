public class solidLeftTriangle {
        public static void main(String args[]) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1; colVal <= rowVal; colVal++) {
                System.out.print(patternSymbol + " ");
            }
            System.out.println(""); 
        }
    }
}
