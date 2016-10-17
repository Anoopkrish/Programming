#include <stdio.h>

int main(void) {
	int *p,*q,a,b,sum;
    p=&a;
    q=&b;
    printf("Enter the value a and b");
    scanf("%d %d",&a,&b);
    sum=*p+*q;
    printf("\nThe sum of two numbers is %d",sum);
	// your code goes here
	return 0;
}
