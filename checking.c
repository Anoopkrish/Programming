#include <stdio.h>

int main() {
	int n,i,a[10],j;
	printf("\nEnter the number of numbers in the numbers ");
	scanf("%d",&n);
	printf("\nEnter the array of numbers");
	for(i=0;i<=n;i++)
	{
		scanf("\n%d",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
			if(a[i]==a[j])
			{
				printf("%d",a[i]);
				break;
			}
		}
	}
	// your code goes here
	return 0;
}
