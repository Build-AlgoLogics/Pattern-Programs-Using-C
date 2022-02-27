numRows = 5
numToPrint = 1;

for rowVal in range(1, numRows + 1):
    for colVal in range(1, numRows + 1):
        if rowVal % 2 == 1:
            # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
            # and also using pyhton based number formatting to format the output. 
            print("%3d" % (numToPrint), "", end="")
            numToPrint += 1 
        else:
            # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
            # and also using pyhton based number formatting to format the output. 
            print("%3d" % (numToPrint), "", end="")
            numToPrint -= 1
    # this is how we can use ternary operator in python
    numToPrint += numRows + (-1 if rowVal % 2 == 1 else 1);
    print()   # for new line

