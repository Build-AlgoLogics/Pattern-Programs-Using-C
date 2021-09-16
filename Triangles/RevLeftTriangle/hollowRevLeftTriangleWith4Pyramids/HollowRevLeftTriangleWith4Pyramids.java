/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/

public class HollowRevLeftTriangleWith4Pyramids {
        public static void main(String args[]) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = numRows; rowVal >= 1; rowVal--) { // from 7 => 1
            for (colVal = 1; colVal <= rowVal; colVal++) {
                if(colVal == 1 || colVal == rowVal || rowVal == numRows) {
                    System.out.print(patternSymbol + " ");
                } else if(rowVal == (numRows / 2) + 1 || colVal == (numRows / 2) + 1) {
                    System.out.print(patternSymbol + " ");
                } else if(rowVal - colVal == numRows / 2) {
                    System.out.print(patternSymbol + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println(""); 
        }
    }
}
