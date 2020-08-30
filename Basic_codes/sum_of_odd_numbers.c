//Programe to calculate sum of all the odd numbers upto a given input number 
#include <stdio.h>
int main ()
{
	int n;
	printf("enter the number \n");
	scanf("%d",&n);
	if(n%2==0){
		n=n-1; 
	}
	if(n<=0){
		printf("sum is not defind");
		return 0;
	}
	int sum=n;
	while(!(n==1)){
		n=n-2;
		sum=sum+n;
	}
	printf("Sum of all the odd numbers till the given input is %d",sum);
	return 0;
}	