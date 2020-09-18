#include <stdio.h>
#include <math.h>
long power(int a,int n);
long  main ()
{
	int a,n;
	long y;
	printf("enter the base and the power ");
	scanf("%d%d",&a,&n);
	y=power(a,n);
	printf("the answer is %d \n", y);
}
long power(int a,int n)
{
	if(n==0) {
		return 1;
	}
	else {
		return(a*pow(a,n-1));
	}
}
	
	
	
	
	