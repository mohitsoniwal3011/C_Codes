#include <stdio.h>
void find_majority(int A[],int n);
int freq(int A[],int index,int n);
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
	find_majority(A,n);
	return 0;
}
void find_majority(int A[],int n)
{	
	int x=n/2,frequency,i;
	for(i=0;i<n;i++){
		frequency=freq(A,i,n);
		if( frequency > n/2 ){
			printf("majority element is %d \n ",A[i] );
			return ;
		}
	}	
	printf("no majority element");
}	
int freq(int A[],int i,int n)
{
	int k=0,j=0; //k denots frequency of the element;
	while(j<n ){
		if(A[j] == A[i]){
			k++ ;
		}
		j++;
	}
	return k;
}
			