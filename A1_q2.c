/*
 * C program to find the factorial of a number provided by user
 */
#include <stdio.h>
 
  int main()
{
	//intialise the value
    long int i, num, factorial = 1;
 
    printf("\nEnter an integer number \n");
    scanf ("\n%ld", &num );
    
    //check if the number is negative,positive or zero.  
    if (num<0)
    {
    	printf("\nFactorial does not exist for negative integer.Enter the positive integer.\n");
	}
	else if(num==0) 
	{
		printf("\nFactorial of 0 is 1.");
	}
	else
    {
    	
	//loop iterate till num
       for (i = 1; i <= num; i++)
        {
        factorial = factorial * i;
        }
      
    printf ("\nFactorial of %ld is = %ld \n", num, factorial);
    }
}
