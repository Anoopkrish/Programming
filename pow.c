#include <stdio.h>
#include<math.h>

int main(void) {
	int a,n,result;
	printf("\nEnter a number");
	scanf("%d",&n);
	printf("\nEnter the exponent");
	scanf("%d",&a);
	result=pow(n,a);
	printf("\nThe power of the number is %d",result);
	// your code goes here
	return 0;
}
