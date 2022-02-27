/***====================================
 *               colVals               *
 *              1 2 3 4 5              *
 *  rowVal = 1      *                  *
 *  rowVal = 2    * * *                *
 *  rowVal = 3  * * * * *              *
 *  rowVal = 4    * * *                *
 *  rowVal = 5      *                  *
 *                                     *
 ***===================================*/

// Method 1
#include<stdio.h>

void main() {
    int n = 7; // numRows
    int i;     // rowVal
    int j;     // colVal
    int ns = n / 2; // numSpaces
    int nps = 1;    // numPatternSymbol

    char patternSymbol = '*';

    for(i = 1; i <= n; i++) {
        for(j = 1 ;j <= ns; j++) {
            printf("  ");
        } 
        for(j = 1; j <= nps; j++) {
            printf("%c ", patternSymbol);
        }
        if(i <= n / 2) {
            ns--;
            nps += 2;
        } else {
            ns++;
            nps -= 2;
        }
        printf("\n");
    }
}


//Method 2

// #include<stdio.h>

// void main() {
//     int numRows = 7;
//     int newNumRows = numRows / 2 + 1;
//     int rowVal;
//     int colVal;
//     int temp = 1;
//     char patternSymbol = '*';

//     for(rowVal = 1; rowVal <= newNumRows; rowVal++) {
//         for(colVal = 1 ;colVal <= newNumRows - rowVal; colVal++) {
//             printf("  ");
//         } 
//         for(colVal = 1; colVal <= temp; colVal++) {
//             printf("%c ", patternSymbol);
//         }
//         temp += 2;
//         printf("\n");
//     }

//     temp -= 4;

//     for(rowVal = 1; rowVal <= newNumRows - 1; rowVal++) { // 3 times
//         for(colVal = 1; colVal <= rowVal; colVal++) {
//             printf("  ");
//         } 
//         for(colVal = 1; colVal <= temp; colVal++) {
//             printf("%c ", patternSymbol);
//         }
//         temp -= 2;
//         printf("\n");
//     }
// }



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
            cout<<patternSymbol<<" ";
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


class solidDiamond {
	public static void main (String[] args) {
        int numRows = 7;
        int rowVal;
        int colVal;
        int numSpaces = numRows / 2;
        int numPatternSymbols = 1;

        char patternSymbol = '*';

        for(rowVal = 1; rowVal <= numRows; rowVal++) {
            for(colVal = 1 ;colVal <= numSpaces; colVal++) {
                System.out.print("  ");
            } 
            for(colVal = 1; colVal <= numPatternSymbols; colVal++) {
                // print() function for avoiding line break
                System.out.print(" " + patternSymbol); 
            }
            if(rowVal <= numRows / 2) {
                numSpaces--;
                numPatternSymbols += 2;
            } else {
                numSpaces++;
                numPatternSymbols -= 2;
            }
            // println() For including line break after printing each row.
            System.out.println(""); 
        }
    }
}



numRows = 7

# floor division to get only integer value.
numSpaces = numRows // 2;   
numPatternSymbols = 1;

patternSymbol = '*'

for rowVal in range(1, numRows + 1):
    for colVal in range(1, numSpaces + 1):
        print("  ", end="")
    for colVal in range(1, numPatternSymbols + 1):
        # heer, I am only using this "" because, 
        # sep parameter is already giving us one space as sep=" "
        print(patternSymbol, "", end="")
    if rowVal <= numRows // 2:
        numPatternSymbols += 2
        numSpaces -= 1
    else:
        numPatternSymbols -= 2
        numSpaces += 1
    print()   # for new line