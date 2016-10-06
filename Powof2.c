#include<stdio.h>
int main()
{
int i,n,flag=0;
printf("Enter any number");
scanf("%d",&n);
while(n>1)
{
if(n%2!=0)
{
flag=1;
break;
}
n=n/2;
}
if(flag==1)
{
printf("\nThe no. is not power of 2");
}

else
printf("\nThe no. is power of 2");
return 0;
}
