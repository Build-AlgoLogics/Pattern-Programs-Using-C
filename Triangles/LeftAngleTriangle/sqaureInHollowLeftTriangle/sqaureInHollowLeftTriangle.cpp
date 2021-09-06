#include <iostream>
using namespace std;

int main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= rowVal; colVal++) {
            if(colVal == 1 || colVal == rowVal || rowVal == numRows) {
                cout<<patternSymbol<<" ";
            } else if(colVal == (numRows/2) + 1 || rowVal == (numRows / 2) + 1) {
                printf("%c ", patternSymbol);
            } else {
                cout<<"  ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
