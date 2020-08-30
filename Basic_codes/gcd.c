#include <stdio.h>
int main ()
{
int a,b,g;
printf("enter the number a=  \n" );
scanf("%d",&a);
printf("enter the number b= \n" );
scanf("%d",&b);
if((a==0)||(b==0)){
	printf("highest common factor is not defined \n"); 
	return 0;
}
else if(a<b){
	g=a;
	a=b;
	b=g;
} 	
g=a%b;
while(!(g==0)){
	a=b;
	b=g;
	g=a%b;
}  
printf("the highest common factor of the two numbers is %d",b);
return 0;
}