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
            if(rowVal == 1 || colVal == 1 || colVal == temp) {
                cout<<patternSymbol<<" ";
            } else if(colVal == (temp / 2) + 1 || rowVal == (numRows / 2) + 1) {
                cout<<patternSymbol<<" ";
            } else {
                cout<<"  ";
            }
        }
        temp -= 2;
        cout<<"\n";
    }
    return 0;
}