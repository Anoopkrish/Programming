#include <stdio.h>
#include<string.h>

int main(void) {
	int str[50],i,count=0;
	printf("Enter the string");
	gets(str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==' ')
		{
			count++;
		}
	}
	printf("\n Total number of words are %d",count);
	// your code goes here
	return 0;
}
