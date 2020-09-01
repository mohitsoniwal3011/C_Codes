//programe to find the man and min  elements in the array
#include <stdio.h>
int main ()
{
	int n;
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	int A[n];
	printf("enter the elements of the array \n"); 
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	int MAX,MIN;
	// finding the max element of the array;
	MAX = A[0];
	for(i=0;i<n;i++){
		if(A[i]>MAX) {
			MAX=A[i];
		}
	}
	printf(" \n the maximum element in the array if %d \n",MAX);
	// finding the MIN element of the array;
	MIN = A[0];
	for(i=0;i<n;i++){
		if(A[i]<MIN) {
			MIN=A[i];
		}
	}
	printf("\n the minimum  element in the array if %d \n",MIN);
	return 0;
} 
		
	
	
	