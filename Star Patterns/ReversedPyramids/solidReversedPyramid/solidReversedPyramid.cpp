#include <iostream>
using namespace std;

int main() {
    int numRows = 7;
    int rowVal;
    int colVal;
    int temp = (numRows * 2) - 1; // temp = 13 in this case
    char patternSymbol = '*';

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal < rowVal; colVal++) {
            cout<<"  ";
        } 
        for(colVal = 1; colVal <= temp; colVal++) {
            cout<<patternSymbol<<" ";
        }
        temp -= 2;
        cout<<"\n";
    }
    return 0;
}