#include <iostream>
using namespace std;

int main() {
    int numRows = 7;
    int rowVal; 
    int colVal; 
    int numSpaces = 0;
    int numPatternSymbols = numRows;

    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numSpaces; colVal++) {
            cout<<"  ";
        } 
        for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
            if(colVal == 1 || colVal == numPatternSymbols) {
                cout<<patternSymbol<<" ";
            } else if(rowVal == 1 || rowVal == numRows) {
                cout<<patternSymbol<<" ";
            } else if(colVal == (numPatternSymbols/2) + 1) {
                cout<<patternSymbol<<" ";
            } else {
                cout<<"  ";
            }
        }
        if(rowVal <= numRows / 2) {
            numSpaces++;
            numPatternSymbols -= 2;
        } else {
            numSpaces--;
            numPatternSymbols += 2;
        }
        cout<<"\n";
    }
    return 0;
}
