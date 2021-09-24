#include <iostream>
using namespace std;

int main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    int numSpaces = numRows / 2;
    int numPatternSymbols = 1;

    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numSpaces; colVal++) {
            cout<<"  ";
        } 
        for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
            if(colVal == 1 || colVal == numPatternSymbols) {
                cout<<patternSymbol<<" ";
            } else if(rowVal == numRows / 2 + 1 || colVal == numPatternSymbols / 2 + 1) {
                cout<<patternSymbol<<" ";
            } else {
                cout<<"  ";
            }
        }
        if(rowVal <= numRows / 2) {
            numSpaces--;
            numPatternSymbols += 2;
        } else {
            numSpaces++;
            numPatternSymbols -= 2;
        }
        cout<<"\n";
    }
    return 0;
}
