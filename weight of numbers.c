#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){
	int narray[50],warray[50],n,i,j,t,t1;
	printf("enter the number of elements:");
	scanf("%d",&n);
	printf("enter %d elements:\n",n);
	for(i=0;i<n;i++){
		scanf("%d",&narray[i]);
	}
	for(i=0;i<n;i++){
		warray[i]=0;
		if(percube(narray[i])){
			warray[i]=warray[i]+5;
		}
		if(narray[i]%4==0 && narray[i]%6==0){
			warray[i]=warray[i]+4;
		}
		if(prime(narray[i])){
			warray[i]=warray[i]+3;
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n-1;j++){
			if(warray[j]>warray[i]){
				t=warray[j];
				warray[j]=warray[i];
				warray[i]=t;
				t1=narray[j];
				narray[j]=narray[i];
				narray[i]=t1;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("<%d,%d>\n",narray[i],warray[i]);
	}
	return 0;
}

int prime(int num){
	int i,flag=1;
	for(i=2;i<num;i++){
		if(num%i==0){
			flag=0;
			break;
		}
	}
	return flag;
}

int percube(int num){
	int i,flag=0;
	for(i=2;i<=num/2;i++){
		if(i*i*i==num){
			flag=1;
			break;
		}
	}
	return flag;
}