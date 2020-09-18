#include <stdio.h>
#include <math.h>
void convert_to_octal(long y,int A[]);
int main ()
{
	int i;
	long y;
	int A[10];
	printf("ente the number in the binary form \n");
	scanf("%ld",&y);
	convert_to_octal(y,A);
	return 0;
}
void convert_to_octal(long y,int A[])
{
	int i=0,j,decimal=0,octal;
	while(y>0){
			decimal=decimal+(y%10)*pow(2,i);
			y=y/10;
			i++;
	}
	printf("the number in the decimal form is \n %d \n",decimal);
	j=0;
	while(decimal>0){
		octal=decimal%8;
		A[j]=octal;
		j++;
		decimal=decimal/8;
	}
	printf("the number in the octal form is :\n");
	for(i=j-1;i>=0;i--){
		printf("%d",A[i]);
	}
}
	
	
	