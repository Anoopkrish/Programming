#include <stdio.h>
#include<string.h>
int main()
{
   int n,rem,vnum=0;
   scanf("%d",&n);
   while(n)
   {
       rem=n%10;
       vnum=vnum*10+rem;
       n=n/10;
   }
   printf("%d",vnum);
   return 0;
   
}    

