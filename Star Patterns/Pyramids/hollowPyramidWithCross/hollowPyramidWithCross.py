numRows = 7
temp = 1
patternSymbol = '*'

for rowVal in range(1, numRows + 1):
    for colVal in range(1, (numRows - rowVal) + 1):
        print("  ", end="")

    for colVal in range(1, temp + 1):
        if colVal == 1 or rowVal == numRows or colVal == temp:
            print(patternSymbol, "", end="") # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
        elif colVal == rowVal or rowVal == (numRows//2) + 1:
            print(patternSymbol, "", end="")
        else:
            print("  ", end="")
    
    temp += 2;  
    print()   # for new line
