#include <iostream>
using namespace std;

int main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= numRows; colVal++) {
            if(colVal==1 || rowVal==1 || colVal == numRows || rowVal == numRows || colVal == rowVal || colVal == numRows - (rowVal-1)) {
                cout<<patternSymbol<<" ";
            } else {
               cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
