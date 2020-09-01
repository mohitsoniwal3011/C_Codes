#include <stdio.h>
void find_pairs(int A[],int n,int x);
int main ()
{
	int n;
	printf("enter the number of elements in the array \n");
	scanf("%d",&n);
	int A[n],x;
	printf("enter the elements of the array \n");
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}	
	printf("enter the sum corresponding to which you want to find the pairs");
	scanf("%d",&x);
	find_pairs(A,n,x);
	return 0;
}
void find_pairs(int A[],int n,int x)
{
	int i,j;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(A[i]+A[j]==x){
				printf("(%d,%d) \n",A[i],A[j]);
			}
		}
	}
	return ;
}	
		