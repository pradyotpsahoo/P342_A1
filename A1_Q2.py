# find the factorial of a number provided by the user.

# taking the input from the user.
num = int(input("Enter the number : "))
factorial = 1

# check if the number is negative, positive or zero
if num < 0:
   print("Factorial does not exist for negative numbers. Enter the positive number.")
elif num == 0:
   print("The factorial of 0 is 1")
else:
#loop iterate till num
     for i in range(1,num+1 ):
       factorial = factorial*i
print("The factorial of",num,"is",factorial)

