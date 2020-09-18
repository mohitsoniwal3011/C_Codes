#include <stdio.h>
#include <stdlib.h>
#define n 10
//int length_array(int A[],int left,int right);
//void merge(int A[],int left,int right,int middle);
//void merge_sort(int A[],int left,int right);
 

int length_array(int A[],int left,int right)
{
	int i;
	int length=0;
	for(i=left;i<=right;i++){
		length++;
		
	}
	return length;
}	
void merge(int A[],int left,int right,int middle)
{
	int L_X,L_Y;
	L_X=length_array(A,left,middle); // L_X=length of x and L_Y=length of array Y
	
	L_Y=length_array(A,middle+1,right);
	
	int X[L_X],Y[L_Y];
	int i=0,j=0;
	int k=left;
	for(i=0;i<L_X;i++){
		//X[i]=A[i];   // this was the reason behind failure the of the programe again and again:
		X[i]=A[left+i];
	}
	for(i=0;i<L_Y;i++){
		Y[i]=A[middle+1+i];
	}
	i=0;
	j=0;
	k=left;
	while(i<L_X && j<L_Y){
		if(X[i]<=Y[j]){
			A[k]=X[i];
			i++;
		}
		else{
			A[k]=Y[j];
			j++;
		}
		k++;
	}
	while(i<L_X){
		A[k]=X[i];
		i++;
		k++;
	}
	while(j<L_Y){
		A[k]=Y[j];
		j++;
		k++;
	}
	

}
void merge_sort(int A[],int left,int right)
{
	int length;
	length=length_array(A,left,right);
	//int k=(left+right);
	int mid=(left+right)/2 ;
	if(length>1){
		merge_sort(A,left,mid);
		merge_sort(A,mid+1,right);
		merge(A,left,right,mid);
	}
	else{
		return ;
	}	
}
void  main ()
{
	int A[n] ;
	int i;
	printf("enter the elements of the array \n");
	for(i=0;i<n;i++){
		scanf("%d",&A[i]);
	}
	merge_sort(A,0,n-1);
	//merge(A,0,n-1,(n-1)/2);
	printf("the sorted array is \n");
	for(i=0;i<n;i++){
		printf("%d\n",A[i]);
	}  
	//return 0;
}

	
	
	
		
		
	
	
	