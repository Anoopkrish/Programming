#include <stdio.h>

int main() {
	int n,i,a[10],x,j;
	printf("Enter the value of x");
	scanf("%d",&x);
	printf("\nEnter the number of numbers in tha array");
	printf("\nEnter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;i<n;i++)
		{
		    if(x==(a[i]+a[j]))
		    {
		    	printf("The numbers are %d %d",a[i],a[j]);
		    	return 0;
		    }
		}
	}
	// your code goes here
	return 0;
}
