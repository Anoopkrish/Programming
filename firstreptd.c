#include <stdio.h>

int main() {
	int n,i,a[10],j;
	printf("Enter the number of numbers in the array");
	scanf("%d",&n);
	printf("\nEnter the array of numbers");
	for(i=0;i<=n;i++)
	{
	   scanf("%d",&a[i]);	
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[j]==a[i])
			{
				printf("\n%d",a[i]);
				return 0;
				
			}
		}
	}
	
	// your code goes here
	return 0;
}
