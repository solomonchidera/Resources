#!/usr/bin/python3

try:
    aList = [1,3,2,4,6,5]

    print(aList[10])



#except: #catch any exception!
#   print("What are you doing bro!")

#except IndexError: #catch indexerror exception.
#   print("You are out of range")

# To make a list of exception catching you use
except(IndexError, TypeError, NameError):
    print("You are out of range again")