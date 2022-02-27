numRows = 5
charToPrint = 0; # A => 65, Z => 90
charA = ord('A') # for storing refference of A

for rowVal in range(1, numRows + 1):
    for colVal in range(1, numRows + 1):
        if rowVal % 2 == 1:
            # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
            # and also using pyhton based number formatting to format the output.
            # Here, for conversion between ASCII and CHARACTERs, we have to make use of ord() and chr() functions 
            print("%c " % (chr(charA + charToPrint % 26)), "", end="")
            charToPrint += 1 
        else:
            # heer, I am only using this "" because, sep parameter is already giving us one space as sep=" "
            # and also using pyhton based number formatting to format the output. 
            # Here, for conversion between ASCII and CHARACTERs, we have to make use of ord() and chr() functions 
            print("%c " % (chr(charA + charToPrint % 26)), "", end="")
            charToPrint -= 1
    # this is how we can use ternary operator in python
    charToPrint += numRows + (-1 if rowVal % 2 == 1 else 1);
    print()   # for new line

