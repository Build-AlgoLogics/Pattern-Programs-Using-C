numRows = 9
temp = 2
patternSymbol = '*'

for rowVal in range(1, numRows + 1):
    for colVal in range(1, rowVal + 1):
        if colVal == 1 or colVal == rowVal or rowVal == numRows:
            print(patternSymbol, "", end="") # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
        elif colVal == (numRows//2) + 1 or rowVal == (numRows // 2) + 1:
            print(patternSymbol, "", end="")
        elif rowVal == (numRows//2) + temp and colVal == temp:
            print(patternSymbol, "", end="")
            temp += 1
        else:
            print("  ", end="")
    print()   # for new line