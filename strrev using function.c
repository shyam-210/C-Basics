#include<stdio.h>
#include<string.h>

int main(){
	char str[100];
	printf("enter the string to be reversed:");
	scanf("%s",&str);
	printf("the reversed string is %s",strrev(str));
	return 0;
}