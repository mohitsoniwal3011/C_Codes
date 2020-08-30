#include <stdio.h>
int main ()
{
	int sum, n;
	printf("enter the natural naumber \n");
	scanf ("%d",&n);
	if(n<=0){
		printf("please enter a natural number");
	}	
	sum=n*(n+1)/2 ;
	printf(" \n the sum of the natural numbers upto given input  number is %d",sum );
	return 0;
}
