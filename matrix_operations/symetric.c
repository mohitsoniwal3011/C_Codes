#include <stdio.h>
int main ()
{
	int n,i,j;
	printf("enter the order of the matrix \n");
	scanf("%d",&n);
	int A[n][n];
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(A[i][j] != A[j][i]){
				printf("the matrix is not symmetric");
				return 0;
			}
			
		}
	}
	printf("the matrix is a symmetric matrix");	
}	
	
	
	
