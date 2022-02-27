numRows = 7
numSpaces = 0;   # floor division to get only integer value.
numPatternSymbols = numRows;

patternSymbol = '*'

for rowVal in range(1, numRows + 1):
    for colVal in range(1, numSpaces + 1):
        print("  ", end="")
    for colVal in range(1, numPatternSymbols + 1):
        if colVal == 1 or colVal == numPatternSymbols or rowVal == 1 or rowVal == numRows:
            print(patternSymbol, "", end="") # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
        elif colVal == (numPatternSymbols//2) + 1:
            print(patternSymbol, "", end="")
        else:
            print("  ", end="")
    if rowVal <= numRows // 2:
        numPatternSymbols -= 2
        numSpaces += 1
    else:
        numPatternSymbols += 2
        numSpaces -= 1
    print()   # for new line
