#include <stdio.h>
#include<string.h>

int main(void) {
	char str[10];
	int l;
	printf("Enter a string");
	scanf("%s",str);
	l=strlen(str);
	printf("\nThe length of the string is %d",l);
	// your code goes here
	return 0;
}
