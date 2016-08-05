#include <stdio.h>

int main() {
	char str[10],a[10],b[10];
	int i;
	printf("Enter a string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i=i+2)
	{
		a[i]=str[i];
	}
	for(i=1;str[i]!='\0';i=i+2)
	{
		b[i]=str[i];
	}
	for(i=0;str[i]!='\0';i++)
	{
	  printf("%s",a[i]);
	  printf("%s",b[i]);
	}
	// your code goes here
	return 0;
}
