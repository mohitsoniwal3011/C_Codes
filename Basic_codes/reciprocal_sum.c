#include <stdio.h>
 int main ()
{
	float n,sum=0,reciprocal; 
	int j;
	printf("enter the number upto which you want to calculate the sum");
	scanf("%d",&j);
	for(n=1;n<=j;n++){
		sum=sum + 1/n;
	}
	printf("sum is %f",sum);
	return 0;
}