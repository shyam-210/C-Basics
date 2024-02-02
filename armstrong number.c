#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	int n,rem,sum=0,cube=0,temp;
	printf("enter the number to check:");
	scanf("%d",&n);
	temp=n;
	while(n!=0){
		rem=n%10;
		cube=rem*rem*rem;
		sum=sum+cube;
		n=n/10;
	}
	if(sum==temp){
		printf("the number %d is armstrong number",temp);
	}
	else{
		printf("the number %d is not an armstrong number",temp);
		
	}
	return 0;
}