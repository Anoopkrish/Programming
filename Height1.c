#include <stdio.h>

int main(void) {
	int i,a[60],k,temp;
	printf("Enter the height of 5 students");
	printf("Enter the value of k")
	for(i=0;i<50;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<50;i++)
	{
		if(a[i]<a[i+1])
		{
			temp=a[i];
			a[i]=a[i+1];
			a[i+1]=temp;
		}
	}
	printf("The 4th tallest person is %d",a[3]);
	printf("The kth tallest person is %d",a[k];// your code goes here
	return 0;
}
