#include<stdio.h>
int main ()
{
	int m,n;
	printf("enter the order of the matrix  \n");
	scanf("%d%d",&m,&n);
	int i,j,matrix[m][n];
	for(i=0;i<m;i++) 	{
		for(j=0;j<n;j++){
			scanf("%d",&matrix[i][j]);
		} 
	}
	printf("\n the transpose of the matrix is ");
	for(j=0;j<n;j++){
		printf("\n");
		for(i=0;i<m;i++){
			printf("%d ",matrix[i][j]);
		}
	}	
}			
		