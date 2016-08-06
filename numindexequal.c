#include <stdio.h>

int main() {
	int n,i,a[10];
	printf("Enter the number of numbers in the array");
	scanf("%d",&n);
	printf("\nEnter the array of numbers in the increased sorted manner");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		if(a[i]==i)
		{
			printf("\nThe number %d and position %d have same index",a[i],i);
		}
	}
	// your code goes here
	return 0;
}
