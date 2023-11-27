#!/usr/bin/python3
num1, num2 = input("Enter two number to divide ").split()

try:
    division = int(num1) / int(num2)
    print("{} / {} = {}".format(num1, num2, division))

except ZeroDivisionError:
    print("You can't divide by zero")

else:
    print("You didn't raise any error")

finally:
    print("I will always execute")