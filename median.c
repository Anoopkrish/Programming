#include <stdio.h>

int main(void) {
	int a[10],i,sum=0,median,n;
	printf("Enter the value of n");
	scanf("%d",&n);
	printf("Enter the array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
			sum=sum+a[i];
	}
	median=sum/n;
	printf("The median is %d",median);
	// your code goes here
	return 0;
}
