#include <stdio.h>

int main() {
	int n=50,i,j,k,temp;
	printf("Enter the heights of the 50 students");
	for(i=0;i<50;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("Enter the value of k");
	scanf("%d",&k);
	printf("%d",a[3]);
	printf("%d",a[k]);
	
	// your code goes here
	return 0;
}
