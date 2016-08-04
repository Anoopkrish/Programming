#include <stdio.h>

int main() {
	int n,b[10],a,i,flag=0;
	printf("Enter the number of numbers in your array");
	scanf("%d",&n);
	printf("\nEnter the array of numbers");
	{
		for(i=0;i<=n;i++)
		{
			scanf("%d",&b[i]);
		}
	}
	printf("\nEnter the number to be searched from the given array");
	scanf("%d",&a);
	for(i=0;i<=n;i++)
	{
		if(a==b[i])
		{
			flag=1;
		}
		else
		{
			flag=0;
		}
	}
	if(flag==1)
	{
		printf("\nNumber found at %d",i+1);
	}
	else
	{
		printf("\nnumber not found");
	}
	
	// your code goes here
	return 0;
}
