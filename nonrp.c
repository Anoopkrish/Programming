#include <stdio.h>
#include<string.h>
int main(void) {
	char str[20];
	int i,j,count=0;
	printf("Enter a string");
	scanf("%s",str);
	for(i=0;str[i]!=0;i++)
	{
		for(j=i+1;str[i]!=0;i++)
		{
			if(str[i]==str[j])
			{
				break;
			}
		}
		count++;
	}	
	printf("\nThe count is %d",count);
	return 0;
}
