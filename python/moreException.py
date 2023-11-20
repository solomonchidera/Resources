#!/usr/bin/python3

class DogNameError(Exception):
    def __init__(self, *args, **kwargs):
        Exception.__init__(self, *args, **kwargs)

try:
    dogName = input("What is your dog's Name? ")

    if any(char.isdigit() for char in dogName):

        raise DogNameError
    else:
        print(f"{dogName}! what a nice name you got for your dog")


except DogNameError:
    print("Sorry your dog's name can't contain numbers")