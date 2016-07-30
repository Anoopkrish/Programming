#include <stdio.h>
int main() {
	char str[10];
	int i,count=0;
	printf("Enter the string");
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]=='a')||(str[i]=='e')||(str[i]=='i')||(str[i]=='o')||(str[i]=='u')||(str[i]=='A')||(str[i]=='E')||(str[i]=='I')||(str[i]=='O')||(str[i]=='U'))
		{
			count++;
		}
	}
	printf("\nThe number of vowels are %d",count);
	
	// your code goes here
	return 0;
}
