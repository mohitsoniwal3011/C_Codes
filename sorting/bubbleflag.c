#include <stdio.h>
#define n 5
void bubblesort(int A[] );
int main ()
{
	int A[n],i;
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	bubblesort(A);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
void bubblesort(int A[])
{
	int i,j,g,k,flag=0;
	for(i=n-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(A[j]>A[j+1]){
				g=A[j+1];
				A[j+1]=A[j];
				A[j]=g;
				flag=1;
			}
			
		}
		if(flag==0){
			break;
		}	
	}
}
	