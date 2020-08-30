#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c,g;
	printf("enter the number in which first and last digit is to be calculated");
	scanf("%d",&c);
	g=c%10;
	printf("the first digit is %d \n",g);
	a=1;
	b=pow(10,a);
	g=c/b;
	while(!(g==0)){
		a=a+1;
		b=pow(10,a);
		g=c/b;
	}
	a=a-1;
	b=pow(10,a);
	g=c/b;
	printf("and the last digit is %d",g);
	return 0;
}