#include <stdio.h>
#define n 5
void insretionsort(int A[] );
int main ()
{
	int A[n],i;
	for (i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	insretionsort(A);
	for(i=0;i<n;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
void insretionsort(int A[])
{
	int i,j,g,key;
	for(i=1;i<n;i++){
		key=A[i];
		j=i-1;
		while (A[j]> key && j>=0){
			A[j+1]=A[j];
			j--;
		}
		A[j+1]=key;
	}
}
	
	