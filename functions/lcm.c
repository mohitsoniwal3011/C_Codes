#include <stdio.h>
int lcm(int a,int b);
int main ()
{
	int m,n,temp,y;
	printf("enter the numbers \n");
	scanf("%d%d",&m,&n);
	if(m>n){
		temp=m;
		m=n;
		n=temp;
	}
	y=lcm(m,n);
	printf("the lcm is %d",y);
	return 0;
}
 int lcm(int a,int b)
{  	
	static int multiple=0;
	multiple=multiple +b;
	if (multiple%a==0){
		return multiple;
	}
	else {
		return lcm(a,b)	;
	}
}	