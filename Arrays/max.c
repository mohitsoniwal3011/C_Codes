///C/C++ Program for Find the maximum element in an array which is first increasing and then decreasing
#include <stdio.h>
int main ()
{
	int n;
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	int i,A[n];
	printf("enter the elements of the array \n");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	for(i=0;i<n;i++){
		if(A[i]>A[i+1]){
			printf("the maximum element is %d",A[i]);
			break;
		}	
	}
	return 0;
}	