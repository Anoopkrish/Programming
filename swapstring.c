#include <stdio.h>

int main() {
	 char str[10];
	 int i,temp;
	 printf("Enter the string");
	 scanf("%s",str);
	 printf("The original string is %s",str);
	 for(i=1;i<=strlen(str);i+2)
	 {
	 	temp=str[i];
	 	str[i]=str[i+1];
	 	str[i+1]=str[i];
	 }
	 printf("The swapped string is %s",str);
	 return 0;
	
	}
