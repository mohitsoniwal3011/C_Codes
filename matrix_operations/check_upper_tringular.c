#include<stdio.h>
int main ()
{	int n;
	printf("enter the order of the matrix");
	scanf("%d",&n);
	int i,j,matrix[n][n];
	printf("enter the elements of the matrix");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(matrix[i][j] != 0 && j<i){
				printf("the given matrix is not an upper tringular matrix");
				return 0;
			}
			
		}
	}
	if(i==n && j==n){
				printf("the matrix is an upper tringular matrix");
				return 0;
	}
}	
				