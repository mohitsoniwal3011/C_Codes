#include <stdio.h>
#define n 5
int main ()
{
	int A[n],B[n],i,j;
	for (i=0,j=n-1;i<n,j>=0;i++,j--){
		scanf("%d",&A[i]);
		B[j]=A[i];
	}
	printf("the reverse order of the array  is  \n ");
	for(i=0;i<n;i++){
		printf("%d ",B[i]);
	}
	return 0;
}
	