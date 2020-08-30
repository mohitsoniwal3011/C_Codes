#include <stdio.h>
int main ()
{
	int g,n;
	g=0;
	printf ("enter the number \n");
	scanf("%d",&n);
	while(!(n==0)){
		n=n/10;
		g=g+1;
	}
	printf("number of digits is %d",g);
}

