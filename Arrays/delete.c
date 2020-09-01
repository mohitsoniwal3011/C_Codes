#include <stdio.h>
#define n 5
int main ()
{
	int A[n],i,j;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	printf("enter the index of the element you want to delete \n ");
	if(j>n-1){
		printf("please enter a valid index");
		return 0;
	}	
	scanf("%d",&j);
	for(i=j;i<n-1;i++,j++){
		A[j]=A[j+1];
	}
	printf("the remaining array is \n");
	for(i=0;i<n-1;i++){
		printf("%d ",A[i]);
	}
	return 0;
}
	
	
	