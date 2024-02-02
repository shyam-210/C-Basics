#include<stdio.h>
#include<string.h>
int main(){
	char str1[100],str2[100];
	printf("enter string 1:");
	gets(str1);
	strcpy(str2,str1);
	printf("copied string str2 is %s",str2);
	return 0;
}