#include <stdio.h>
#include <math.h>
int main ()
{
	int a,b,c,g;
	printf("enter the number in which the number of digits is to be calculated ");
	scanf("%d",&c);
	a=1;
	b=pow(10,a);
	g=c/b;
	while(!(g==0)){
		a=a+1;
		b=pow(10,a);
		g=c/b;
	}
	printf("number of digits in the given input number is %d",a);
<<<<<<< HEAD
	return 0;
=======
>>>>>>> 5ee896a56b68a968b94205d990d2a4185948f5f0
}


