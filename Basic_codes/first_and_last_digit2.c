#include <stdio.h>
int main ()
{
	int n;
	printf("enter the number \n");
	scanf("%d",&n);
	int first,last;
	last=n%10;
	while(n>=10){
		n=n/10;
	}
	first=n;
	printf("first digit is %d and last digits is %d",first,last);
	return 0;
}
