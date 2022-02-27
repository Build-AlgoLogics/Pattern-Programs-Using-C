/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/

public class hollowRevRightTriangle {
        public static void main(String args[]) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = numRows; rowVal >= 1; rowVal--) {
            for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
                System.out.print("  ");
            } 
    
            for(colVal = 1; colVal <= rowVal; colVal++) {
                if(colVal == 1 || colVal == rowVal || rowVal == numRows) {
                    System.out.print(patternSymbol + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println(""); 
        }
    }
}
