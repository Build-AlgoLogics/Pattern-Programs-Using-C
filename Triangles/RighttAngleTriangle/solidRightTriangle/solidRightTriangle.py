numRows = 7
patternSymbol = '*'

for rowVal in range(1, numRows + 1):
    for colVal in range(1, (numRows - rowVal) + 1):
        print("  ", end="")
    for colVal in range(1, rowVal + 1):
        print(patternSymbol, "", end="") # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
    print()   # for new line