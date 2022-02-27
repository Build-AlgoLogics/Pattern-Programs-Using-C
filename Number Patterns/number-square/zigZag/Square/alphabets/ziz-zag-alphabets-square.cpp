#include <iostream>
using namespace std;

int main() {
   int numRows = 5;
    int rowVal;
    int colVal;
    int charToPrint = 0; // A => 65, Z => 90

    for(rowVal = 1; rowVal <= numRows; rowVal++) {
        for(colVal = 1; colVal <= numRows; colVal++) {
            if(rowVal % 2 == 1) {
                // Logic for Odd row
                printf("%c ", 'A' + (charToPrint % 26));
                charToPrint++;
            } else {
                // Logic for Even row
                printf("%c ", 'A' + (charToPrint % 26));
                charToPrint--;
            }
        }
        // for true condition, it will returns -1 else return 1.
        charToPrint += numRows + ((rowVal % 2 == 1) ? -1 : 1);
        cout<<"\n";
    }
    return 0;
}
