#include <stdio.h>
int  main ()
{
	float c;
	printf("enter the celsius temperature ");
	scanf("%f",&c);
	float f=9*c/5 +32;
	printf("the faheranheight temperature is %f", f);
	return 0;
}