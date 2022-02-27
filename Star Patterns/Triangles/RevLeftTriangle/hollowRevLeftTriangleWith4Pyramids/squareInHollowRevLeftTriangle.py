numRows = 7
patternSymbol = '*'

# syntax of range function: range(start, end, steps)
for rowVal in range(numRows, 0, -1):    # starting from 7 to 1, 0 will be exclude
    for colVal in range(1, rowVal + 1):
        if colVal == 1 or colVal == rowVal or rowVal == numRows:
            print(patternSymbol, "", end="") # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
        elif rowVal == (numRows // 2) + 1 or colVal == (numRows // 2) + 1:
            print(patternSymbol, "", end="")
        elif rowVal - colVal == numRows // 2:
            print(patternSymbol, "", end="")
        else:
            print("  ", end="")
    print()   # for new line

    