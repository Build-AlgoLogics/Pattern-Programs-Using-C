numRows = 7
temp = (numRows * 2) - 1
patternSymbol = '*'

for rowVal in range(1, numRows + 1):
    for colVal in range(1, rowVal + 1):
        print("  ", end="")

    for colVal in range(1, temp + 1):
        if rowVal == 1 or colVal == 1 or colVal == temp:
            print(patternSymbol, "", end="") # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
        else:
            print("  ", end="")
    temp -= 2;  
    print()   # for new line