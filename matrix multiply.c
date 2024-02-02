#include<stdio.h>

int main(){
	int a[10][10],b[10][10],c[10][10],p,q,r,s,i,j,k,sum=0;
	
	printf("enter the number of rows and columns in first matrix:");
	scanf("%d,%d",&p,&q);
	printf("\nenter the elements of the matrix:\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nenter the number of rows and columns in second matrix:");
	scanf("%d,%d",&r,&s);
	if(q!=r){
		printf("\nthe matrices cannot be multiplied\n");
	}
	else{
	
		printf("\nenter the elements of the matrix:\n");
		for(i=0;i<r;i++){
			for(j=0;j<s;j++){
				scanf("%d",&b[i][j]);
			}
		}
		for(i=0;i<p;i++){
			for(j=0;j<s;j++){
				for(k=0;k<r;k++){
					sum=sum+a[i][k]*b[k][j];
				}
				c[i][j]=sum;
				sum=0;
			}
		}
		
		printf("\nthe product of the two matrices are\n");
		for(i=0;i<p;i++){
			for(j=0;j<s;j++){
				printf("%d\t",c[i][j]);
			}
			printf("\n");
		}
	}
	return 0;
}