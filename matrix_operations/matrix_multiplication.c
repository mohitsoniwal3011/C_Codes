//programe to add two metrices 
#include <stdio.h>
int main ()
{
	int i,j;
	int arows,brows,acolumns,bcolumns;
	printf("enter the order of the first matrix(m,n) \n");
	scanf("%d%d",&arows,&acolumns);
	printf("\n enter the order of the second matrix(n,p) \n");
	scanf("%d%d",&brows,&bcolumns);
	int A[arows][acolumns],B[brows][bcolumns] ;
	int C[arows][bcolumns];
	printf("enter the elements of the first array \n");
	for(i=0;i<arows;i++){
		for(j=0;j<acolumns;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter the elements of the second array \n");
	for(i=0;i<brows;i++){
		for(j=0;j<bcolumns;j++){
			scanf("%d",&B[i][j]);
		}
	}
	int k,total=0;
	//computing the multiplication matrix
	for(i=0;i<arows;i++){
		for(j=0;j<bcolumns;j++){
			for(k=0;k<brows;k++){
				total=total+A[i][k]*B[k][j] ;
			}
			C[i][j]=total ;
			total=0;
		}
	}
	printf("the resultant multiplication matrix is given by \n");
	for(i=0;i<arows;i++){
		for(j=0;j<bcolumns;j++){
			printf("%6d ",C[i][j]);
		}
		printf("\n");
	}
	return 0;
}	
	