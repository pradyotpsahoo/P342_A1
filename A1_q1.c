/*
 * C program to find the sum of 'N' natural numbers
 */
#include <stdio.h>
 
  int main()
{
	//intialise the value
    int i, num, sum = 0;
 
    printf("Enter an integer number \n");
    scanf ("%d", &num );
    
    //trap negative number.
    if (num<0)
    {
    	printf("Enter the positive integer.");
	}
	else
    {
	//loop iterate till num
       for (i = 1; i <= num; i++)
        {
        sum = sum + i;
        }
      
    printf ("Sum of first %d natural numbers = %d", num, sum);
    }
}

