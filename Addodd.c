#include <stdio.h>

int main(void) {
	int n,a[10],sum=0;
	printf("Enter the value of n");
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		if((i%2)!=0)
		{
			sum=sum+i;
		}
	}
	printf("\nThe sum of values = %d",sum);
	// your code goes here
	return 0;
}
