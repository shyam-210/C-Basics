#include<stdio.h>

int main(){
	int a[10][10],b[10][10],r,s,i,j;
	printf("enter the rows and columns:");
	scanf("%d,%d",&r,&s);
	printf("enter the elements of the matrix:\n");
	for(i=0;i<r;i++){
		for(j=0;j<s;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++){
		for(j=0;j<s;j++){
			b[j][i]=a[i][j];
		}
	}
	printf("\nthe transpose of the matrix is\n");
	for(i=0;i<s;i++){
		for(j=0;j<r;j++){
			printf("%d\t",b[i][j]);
		}
		printf("\n");
	}
	return 0;
}