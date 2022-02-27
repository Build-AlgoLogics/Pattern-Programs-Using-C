/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/

public class solidRevRightTriangle {
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
                System.out.print(patternSymbol + " ");
            }
            System.out.println(""); 
        }
    }
}
