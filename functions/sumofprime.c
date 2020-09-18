#include <stdio.h>
void sum_of_prime(int n);
int check_prime(int a);
int main ()
{
	int n;
	printf("enter the  number \n");
	scanf("%d",&n);
	sum_of_prime(n);
	return 0;
}
int check_prime(int a)
{
    int found=1,i; 
	for(i=2;i<a;)  {
		if(a%i==0) { 
			found=0;
			return found;
		}		  
		else{
			i=i+1;
		}
		if(i==a-1){
			found=1;
			return found;
		}		
	}
	return found;	
}
void sum_of_prime(int n)
{
	int i,x,y;
	for(i=2;i<n-1;i++){
		x=check_prime(i);
		y=check_prime(n-i);
		if(x+y==2){
			printf("the number can be represented as a sum of two numbers %d and %d",n-i,i);
			return ;
		}
	}
	printf("it is not possible to represent the given number into sum of two prime numbers ");
}
	
	

	