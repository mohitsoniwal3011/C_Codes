#include <stdio.h>
#define size 10
int binary(int A[],int l,int r,int key );
int main ()
{
	int A[size],i,key,y;
	printf("enter the array elements \n");
	for(i=0;i<size;i++){
		scanf("%d",&A[i]);
	}
	printf("enter the key element :\n ");
	scanf("%d",&key);
	y=binary( A,0,size-1,key);
	if(y == -1){
		printf("the key is not found in the array");
	}
	else if(y != -1){
		printf("the key element is found at the index %d ",y);
	}
}
int binary(int A[],int l,int r,int key)	
{
	int mid;	/* l stands for left and r for right  */
	mid= (l+r)/2 ;
	if (l==r && key != A[mid]){
		return -1;   /* if the key is not found */
	}
	
	if(key<A[mid]){
		r=mid-1;
		return binary(A,l,mid-1,key) ;
	}
	if(key>A[mid]){
		l = mid+1;
		return binary(A,mid+1,r,key);
	}	
	if (key==A[mid]){
		return mid;
	}
	
}	
	
		
	
	