#include<stdio.h>

int main(){
	int a[10][10],b[10][10],c[10][10],i,j,r,cl;
	printf("enter the number of rows and columns:");
	scanf("%d,%d",&r,&cl);
	printf("enter the values of A matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<cl;j++){
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nenter the values of B matrix\n");
	for(i=0;i<r;i++){
		for(j=0;j<cl;j++){
			scanf("%d",&b[i][j]);
		}
	}
	printf("\n the sum of the two matrices are\n");
	for(i=0;i<r;i++){
		for(j=0;j<cl;j++){
			c[i][j]=a[i][j]+b[i][j];
			printf("%d \0",c[i][j]);
		}
		printf("\n");
	}
	return 0;
	
}