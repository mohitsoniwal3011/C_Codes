#include <stdio.h>
int fibonaci(int n);
int main ()
{
	int  n;
	int  y;
	printf("enter the number of fibonaci term");
	scanf("%d",&n);
	y=fibonaci(n);
	printf("the fibonaci term to the corresponding number is %d",y);
	return 0;
}
int fibonaci(int n)
{
	if(n<2){
		return n;
	}
	if(n>=2){
		return fibonaci(n-1) + fibonaci(n-2);
	}
}
	