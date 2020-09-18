#include <stdio.h>
#include <math.h>
void perfect(int a,int b);
 void armstrong(int a,int b);
 void prime(int a,int b);
 int main ()
 {
	int  m,n,j;
	if(m>n){
		j=m;
		m=n;
		n=j;
	}	
	printf("enter the numbers between which you want to find prefect ,armstrong,prime numbers  \n ");
	scanf("%d%d",&m,&n);
	perfect(m,n);
	armstrong(m,n);
	prime(m,n);
	return 0;
 }
 void prime(int a,int b)
{
	int i,j;
	printf("the prime numbers are \n");
	for(i=a;i<=b;i++)  {
		for(j=2;j<i;j++){
			if(i%j==0)
			break;
			if(j==i-1)
			printf("%d ",i);
		}
	}
	return;
}		
void armstrong(int a,int b)
{
	int i,j,sum=0;
	printf("\n the armstrong are \n");
	for(i=a;i<=b;i++){
		j=i;
		sum=0;
		while(!(j==0)){
			sum=sum+pow(j%10,3);
			j=j/10;
		}
		if(sum==i)
		printf("%d  ",i);
	}
	printf("\n");
	return;
}
void perfect(int a,int b)
 {
	int i,j,sum=0;
	printf("\n the perfect numbers are \n");
	for(j=a;j<=b;j++,sum=0){
		for(i=1;i<=j-1;i++) {
			if(j%i==0){
				sum=sum+i;
			}	
		}		
			if(sum==j){
				printf("%d ",j);	
			}
	}	
	return;
 }