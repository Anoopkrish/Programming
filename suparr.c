#include <stdio.h>
#include<stdlib.h>

int main(void) {
	int a[10],i,n,max,high,sum1;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("\nEnter the array elements");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	max=((abs(a[0]))-(abs(a[1])));
	for(i=1;i<n;i++)
	{ 
	        sum1=((abs(a[i]))-(abs(a[i+1])));
	        if(sum1>max)
	        {
	        	high=sum1;
	        }
	        else
	        {
	        	high=max;
	        }
	}
	printf("\nThe greatest number is %d",high);
    
	
	// your code goes here
	return 0;
}
