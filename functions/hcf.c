#include <stdio.h>
int hcf(int a,int b);
int main ()
{
	int m,n,temp,y;
	printf("enter two numbers ");
	scanf("%d%d",&m,&n);
	if(m<n) {
		temp=m;
		m=n;
		n=temp;
	}
	y=lcm(m,n);
	printf("the hcf is %d",y);
	return 0;
}
int hcf(int a,int b)
{
	int temp;	
	if(a==b) {
		return a;
	}
	if (a<b ) {
		temp=a;
		a=b;
		b=temp;
	}	
	if(a != b && a>=b) {
		
		
		return lcm(a-b,b);
	}
}	
