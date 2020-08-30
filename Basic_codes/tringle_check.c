//programe to check whether the given sides represent a tringle or not
#include <stdio.h>
int main ()
{
	int a,b,c;
	printf("enter three numbers /n ");
	scanf("%d%d%d",&a,&b,&c);
	int d=a+b;
	int e=b+c;
	int f=c+a;
	if((d>c)&&(e>a)&&(f>b)){
		printf("the given sides represent sides of a tringle ") ;
	} 
	else{
		printf("the given sides do not represent the sides of a tringle") ;
	}
	return 0;
	
}