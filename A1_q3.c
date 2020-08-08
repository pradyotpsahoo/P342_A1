/*
sum over 1+1/2+1/3+...till the sum does not change by more than 0.001.
*/
#include <stdio.h>
int main()
{
	float den=1 ;
	float sum=0;
	float max_num;
	printf("\nEnter an integer number \n");
	//input take 
    scanf ("\n%f", &max_num);
    
    float get_num(float den)
    {
    	return 1/den;
	}
	
	//loop iterate till the condition 
	while(get_num(den)>=0.001 && den<=max_num)
		{
		sum=sum+get_num(den);
		den++;
	    }
	    
	if(get_num(den)<0.001)
	{
		printf("\nThe limit reached.(The sum changed by 0.001.)\n");
		printf("The sum of the series is %f .\n",sum);
	}	
	
	else
	printf("\nThe sum of the series is %f .\n",sum);	
	return 0;
}
