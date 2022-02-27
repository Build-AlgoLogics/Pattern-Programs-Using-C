#include <iostream>
using namespace std;

int main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    int temp = 1;
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1 ;colVal <= numRows - rowVal; colVal++) {
            cout<<"  ";
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            cout<<patternSymbol<<" ";
        }
        temp += 2;
        cout<<"\n";
    }
    return 0;
}
