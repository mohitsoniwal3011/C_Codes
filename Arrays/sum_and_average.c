#include <stdio.h>
#define n 5
int main ()
{
	int A[n],i,sum=0;
	float average;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
		sum =sum + A[i];
	}
	average =(float)sum/(float)n ;
	printf(" \n the sum is %d  and average is %f ",sum,average);
	return 0;
	
}	