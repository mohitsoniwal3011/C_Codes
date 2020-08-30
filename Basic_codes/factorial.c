//programe to calculate the factorial of the given number
#include <stdio.h>
int main ()
{
	int factorial,n;
	printf("enter the number \n");
	scanf("%d",&n);
	factorial=n;
	if(n<0)  {
		printf("factorial of the the given input number is not defined  ");
		return 0;
	}
	while(!(n==1)){
		n=n-1;
		factorial=factorial*n;
	}
	printf("the factorial of the given number is %d ",factorial);
	return 0;
}

