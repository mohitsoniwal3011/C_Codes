#include <stdio.h>
int main ()
{
	long factorial;
	int n,g;
	factorial=1;
	g==1;
	printf("enter the number ");
	scanf("%d",&n);
	if(n<0){
		printf("factorial is not defined ")	;
		return 0;
	}
	while(!(g==n)){
		g=g+1;
		factorial=factorial*g;
	}
	printf("the factorial of the given  input number is %ld ",factorial);
	return 0;
}

