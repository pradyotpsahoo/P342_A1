//sum over 1+1/2+1/3+...till the sum does not change by more than 0.001.

#include <stdio.h>
int main()
{
	float den=1 ;
	float sum=0;
	float max_num;
	printf("\nEnter an integer number \n");
    scanf ("\n%f", &max_num);
    
    float get_num(float den)
    {
    	return 1/den;
	}
	
	while(get_num(den)>=0.001)
		{
		sum=sum+get_num(den);
		den++;
		if(den>max_num)
			{
				break;
			}
	    }
	if(get_num(den)<0.001)
	{
		printf("The limit reached.(The sum changed by 0.001.)");
		printf("The sum of the series is %f .",sum);
	}	
	else
	printf("The sum of the series is %f .",sum);	
	return 0;
}
