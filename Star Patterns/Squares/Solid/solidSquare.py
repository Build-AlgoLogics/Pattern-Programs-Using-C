numRows = 7
patternSymbol = '*'

for rowVal in range(1, numRows + 1):
    for colVal in range(1, numRows + 1):
        print(patternSymbol, "", end="") # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
    print()   # for new line



# Alternate way. just give it a try. (Uncomment it and run)

# numRows = 7
# patternSymbol = '*'
# for val in range(1, numRows + 1):
#     # This is one of Python Feature to repeat strings by using Asterisk (*).
#     print("* " * numRows) 
