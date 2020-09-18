#include <stdio.h>
int main ()
{
	struct complex 
	{
		float real;
		float imaginary;
	} a,b,c;
	scanf("%f%f",&a.real,&a.imaginary);
	scanf("%f%f",&b.real,&b.imaginary);
	c.real=a.real+b.real;
	c.imaginary=a.imaginary + b.imaginary ;
	printf("the sum of the complex is  \n %.2fi + %.2fj",c.real,c.imaginary);
}
	