/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/

public class solidRevLeftTriangle {
        public static void main(String args[]) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = numRows; rowVal >= 1; rowVal--) { // from 7 => 1
            for (colVal = 1; colVal <= rowVal; colVal++) {
                System.out.print(patternSymbol + " ");
            }
            System.out.println(""); 
        }
    }
}
