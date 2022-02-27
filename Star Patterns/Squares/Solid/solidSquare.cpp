#include <iostream>
using namespace std;

int main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= numRows; colVal++) {
            cout<<patternSymbol<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
