#sum over 1+1/2+1/3+...till the sum does not change by more than 0.001.

#defining the get_num function
def get_num(den):
    return float(1/den)

#Initialise the value of variables
den=1
sum=0
#input taking
max_num=int(input("Enter the maximum denominater number : "))

# use while loop to iterate until sum changed by 0.001 and max_num
while(get_num(den)>=0.001 and max_num>=den):
    sum+=get_num(den)
    den+=1

if(get_num(den)<0.001):
    print("\nThe limit reached. (The sum changed by 0.001.)\n")
    print("The sum of the series is ", sum, ".\n")
else:
    print("\nThe sum of the series is ",sum,".\n")
