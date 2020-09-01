//programe to add two metrices 
#include <stdio.h>
int main ()
{
	int i,j,m,n;
	printf("enter the order of the matrix(m,n) \n");
	scanf("%d%d",&m,&n);
	int A[m][n],B[m][n],C[m][n] ;
	printf("enter the elements of the first array \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the elements of the second array \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	//calculating the addition matrix;
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			C[i][j]=A[i][j]+B[i][j];
		}
	}
	//printing the addition matrix
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%6d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
	
	
	
	
		
	