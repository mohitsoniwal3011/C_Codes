#include <stdio.h>
void bubble_sort(int A[],int size);
void eleminate_duplicate(int A[],int B[],int size,int length);
int main ()
{
	int n;
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	int A[n],B[n],i,length=n;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	bubble_sort(A,n);
	eleminate_duplicate(A,B,n,n);
	return 0;
}
void bubble_sort(int A[],int size)	
{
	int i,j,temp;
	for(i=size-1;i>=0;i--){
		for(j=0;j<i;j++){
			if(A[j]>A[j+1]){
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
void eleminate_duplicate(int A[],int B[],int size,int length)
{
	int i,j,temp;
	for(i=0,j=0;i<size;i++){
		if(A[i]==A[i+1]){
			length--;
		}
		if(A[i] != A[i+1]){
			B[j]=A[i];
			j++;
		}
	}
	for(i=0;i<length;i++){
		printf("%d ",B[i]);
	}
}
	
		
	
			
