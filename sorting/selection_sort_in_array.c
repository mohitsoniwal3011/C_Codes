#include<stdio.h>
void selection_sort(int A[],int size);
void swap(int *a,int *b);
int main()
{
	printf("enter the number of elements in the array \n");
	int n,i;
	scanf("%d",&n);
	int A[n];
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	selection_sort(A,n);
	printf("the array in the sorted order is :\n");
	for(i=0;i<n;i++){
		printf("%5d\t",A[i]);
	}
	return 0;
}
//concept:pick the minimum element and put in the apropriate position.
void selection_sort(int A[],int size)
{
	int i,j,min;
	for(i=0;i<size;i++){
		min=A[i];
		for(j=i+1;j<size;j++){
			if(A[j]<min){
				swap(&A[i],&A[j]);;
			}
		}	
	}
}
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
	

	
