# add 1+2+3...100 WITHOUT using the formula n(n+1)/2

#taking input from user
num = int(input("Enter the number : "))
sum = 0

if num < 0:
   print("Enter a positive number")
else:
   # use while loop to iterate until zero
   while(num > 0):
       sum += num
       num -= 1
print("The sum is", sum ,".")
