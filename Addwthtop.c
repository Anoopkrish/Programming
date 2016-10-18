#include <stdio.h>

int main(void) {
	int a,b,i;
	printf("Enter a and b");
	scanf("%d %d",&a,&b);
	for(i=0;i<b;i++)
	{
		a++;
	}
	printf("\nThe sum is %d",a);
	// your code goes here
	return 0;
}
