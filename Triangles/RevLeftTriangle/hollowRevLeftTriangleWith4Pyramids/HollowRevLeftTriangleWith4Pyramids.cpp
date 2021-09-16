/* =======================================================================/
*  --------------------    Solid Triangle Pattern    --------------------*
** ======================================================================*/

#include <iostream>
using namespace std;

int main() {
    int numRows = 7; 
    int rowVal;     
    int colVal;     
    char patternSymbol = '*'; 

    for(rowVal = numRows; rowVal >= 1; rowVal--) { // from 7 => 1
        for (colVal = 1; colVal <= rowVal; colVal++) {
            if(colVal == 1 || colVal == rowVal || rowVal == numRows) {
                cout<<patternSymbol<<" ";
            } else if(rowVal == (numRows / 2) + 1 || colVal == (numRows / 2) + 1) {
                cout<<patternSymbol<<" ";
            } else if(rowVal - colVal == numRows / 2) {
                cout<<patternSymbol<<" ";
            } else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}

