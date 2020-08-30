#include <stdio.h>
int main ()
{
	int a;
	printf("enter the number \n");
	scanf("%d",&a);
	if((a%6==0) &&(a%4==0)){
		printf("input %d is divisible by both 4&6",a);
	}
	else if((a%6==0) && (!(a%4==0))){
		printf("input %d is divisible by 6 but not by 4",a);
	}
	else if((!(a%6==0)) && (a%4==0)){
		printf("input %d is not divisible by 6 but divisible by 4",a);
	} 
	else {
		printf("input %d is neither divisible by 6 nor divisible by 4",a); 
	}
	return 0;
}
