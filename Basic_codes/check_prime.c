#include <stdio.h>
int main ()
{
	int a,b;
	printf("enter the number \n");
	scanf("%d",&a);
	for(b=2;b<=a;){
		if(a%b==0){ 
			printf("the number is not a prime number ") ;
			break;
		}  
		else{
			b=b+1;
		}
	}
	return 0;
}


