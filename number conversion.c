#include<stdio.h>
int main(){
	int n;
	printf("enter a positive decimal number:");
	scanf("%d",&n);
	printf("\nBinary number:");
	convert(n,2);
	printf("\nOctal number:");
	convert(n,8);
	printf("\nHexadecimal number:");
	convert(n,16);
	return 0;
}

void convert(int n,int base){
	int rem=n%base;
	if(n==0){
		return;
	}
	convert(n/base,base);
	if(rem<10){
		printf("%d",rem);
	}
	else{
		printf("%c",rem-10+'A');
	}
}