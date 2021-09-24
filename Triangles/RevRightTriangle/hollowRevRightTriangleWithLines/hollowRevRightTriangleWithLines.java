/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/

public class hollowRevRightTriangleWithLines {
        public static void main(String args[]) {
        int numRows = 7;
        int colVal;
        int rowVal;
        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
                System.out.print("  ");
            } 
    
            for(colVal = 1; colVal <= rowVal; colVal++) {
                if(colVal == 1 || colVal == rowVal || rowVal == numRows || rowVal%2==1) {
                    System.out.print(patternSymbol + " ");
                } else {
                    System.out.print("  ");
                }
            }
            System.out.println(""); 
        }
    }
}
