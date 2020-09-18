#include <stdio.h>
#include <math.h>
int palindrome(int n);
int main ()
{
	int n;
	printf("enter the number \n");
	scanf("%d",&n);
	palindrome(n);
	
}
int palindrome(int n) 
{
	int p=0,m ,x;  /* p stands for number of digits */
	m=n;
	while(n>0){
		n=n/10;
		p=p+1;
	}
	printf("Value of p: %d\n", p);
	n=m;
	x=pow(10,p-1);
	if(n/x == n%10) {
		n=(n % x)/10;
		
		printf("Value of n: %d\n", n);
		
			if(n/10 ==0) {	
				printf("the number is a palindrome number ");
			}
			
		else if (n%10 != 0){	
			return palindrome(n);
		}
	}
	else if (n/x != n%10) {		
		printf("the number is not a palindrome number");
		return 0;
	}
}	
		
		
