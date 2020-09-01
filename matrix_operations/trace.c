#include <stdio.h>
# define n 3  /* n stands for the order of the matrix */
int main ()
{
	int i,j,A[n][n],trace=0;
	printf("enter the matrix \n");
	for(i=0;i<n;i++){	
		for(j=0;j<n;j++){
			scanf("%d", &A[i][j]);
			if(i==j){
				trace =trace + A[i][j];
			}			
		}
	}
	printf("the trace  of the matrix is %d",trace);
}	