 /*Perfect Number in C. Here you will get program for perfect number in C.
 Perfect number is a positive number which is equal to the sum of all its divisors excluding itself.
 For example: 28 is a perfect number as 1 + 2 + 4 + 7 + 14 = 28.  */
 #include <stdio.h>
 #include <math.h>
 int perfect(int a);
 int armstrong(int a);
 int prime(int a);
 int main ()
 {
	int n,x,y,z;
	printf("enter the number \n ");
	scanf("%d",&n);
	x=perfect(n);
	y=armstrong(n);
	z=prime(n);
	if(x==1 && y==1 && z==1)
		printf("the number is prime,armstrong and perfect ");
	if(x==1 &&y==1 && z==0)
		printf("the number is perfect and armstrong  ");
	if(x==1 && y==0 && z==1)
		printf("the number is perfect and prime ");
	if(x==0 && y==1 && z==1)
		printf("the number is armstrong and prime ");
	if(x==1 &&y==0 && z==0)
		printf("the number is a perfect number ");
	if(x==0 && y==1 && z==0)
		printf("the number is aa armstrong number ");
	if(x==0 && y==0 && z==1)
		printf("the number is a prime number ");
	if(x==0 && y==0 && z==0)
		printf("the number is niether of prime ,perfect and armstrong");		
	return 0;
 }
 int perfect(int a)
 {
	int i=1,sum=0;
	while(i<=(a-1)) {
		if(a%i==0){
			sum=sum+i;
		}	
		i++;		
	}	
		if(sum==a){
			return 1;
			//printf("the number is a perfect number  \n");//
		}
		else if (sum!=a){
			return 0;
			//printf("the numebr is not a perfect number \n");
		}	
 }
 int armstrong(int a)
 {
	int j,sum=0;
	j=a;
	while(j != 0){
		sum=sum+pow(j%10,3);
		j=j/10;
	}
	if(sum==a){
		return 1;
		//printf("the number is an armstrong number \n");//
	}
	else if(sum != a){
		return 0;
		//printf("the number is not an armstrong number \n ");//
	}
}
int prime(int a)
{
	int i=2;
	while(i<a){
		if(a%i==0){
			return 0;
			//printf("the number is not a prime  number ");
			break;
		}
		i++;
	}
	if(i==a){
		return 1 ;
		//printf("the number is a prime numnber ");
	}
}
	
 
	
	
 
	
			
	
			
