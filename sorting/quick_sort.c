#include <stdio.h>
#define n 8
int partition (int A[],int left,int right);
void print_array(int A[],int size);
void swap(int *x,int *y) ;
void quick_sort(int A[],int left, int right);

int main ()
{
	int A[n];
	printf("enter the elements of the array");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	quick_sort(A,0,n-1);
	printf("the sorted array is \n");
	print_array(A,n);
	return 0;
}

void print_array(int A[],int size)
{
	int i;
	for(i=0;i<size;i++){
		printf("%d\n",A[i]);
	}
	return ;
}

int  partition (int A[],int left,int right)
{
	int i,j;
	int pivot=A[right];
	   // we are assuming no element is greater then pivot so we are 
			//	initilizing i to  -1 ;
	for(i= left-1,j=left;j<=right-1;j++){
		if(A[j]<=pivot){
			i++;
			swap(&A[i],&A[j]);
		}
	}
	swap(&A[i+1],&A[right]);
	return (i+1);
	//print_array(A);
}	

void swap(int *x,int *y)
{
     int temp;
	 temp=*x;
	 *x=*y;
	 *y=temp;
} 
void quick_sort(int A[],int left, int right)
{
	int length;
	length=right-left+1;
	int k;
	if(length>1){
		k=partition(A,left,right);
		quick_sort(A,left,k-1);
		quick_sort(A,k+1,right);
	}
	
}	
		
		
	
	