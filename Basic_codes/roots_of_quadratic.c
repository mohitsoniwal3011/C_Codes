#include <stdio.h>
#include <math.h>
int main ()
{
	float a,b,c,root1,root2,d;
	printf ("enter the coffiecients of x*x, x and  constent term respectively \n");
	scanf("%f%f%f",&a,&b,&c);
	d=sqrt(b*b-4*a*c);
	root1=(-b-d)/2*a;
	root2=(-b+d)/2*a;
	printf("the two roots of the given quadratic expression are %f and %f respectively",root1,root2);
	return 0;
}
