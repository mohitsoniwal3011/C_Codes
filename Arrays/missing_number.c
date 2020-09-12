//C/C++ Program for Find the Missing Number
#include <stdio.h>
#define n 10
int check_missing_number(int A[],int size);
int main ()
{
	int A[9]={3,4,9,1,5,6,8,2,10} ;
	int k=check_missing_number(A,9);
	printf("missing number is %d",k);
	return 0;
}
int check_missing_number(int A[],int size)
{
	int sum,sum_array=0;
	sum=(size+1)*(size+2)/2 ;
	int i;
	for(i=0;i<size;i++){
		sum_array=sum_array+A[i] ;
	}
	int missing_number =sum-sum_array;
	return missing_number;
}
	
	