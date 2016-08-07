#include <stdio.h>

int main() {
	int n,i,a[10],j;
	printf("Enter the number of numbers in array");
	scanf("%d",&n);
	printf("\nEnter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(a[i]+a[j]==0)
			{
				printf("\nThe numbers that give zero when added are %d %d",a[i],a[j]);
				
			}
		}
	}
	// your code goes here
	return 0;
}
