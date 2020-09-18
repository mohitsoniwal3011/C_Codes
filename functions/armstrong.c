#include <stdio.h>
#include <math.h>
 void armstrong(int a,int b);
 void  main()
 {
	int m,n,j;
	scanf("%d%d",&m,&n);
	if(m>n){
		j=m;
		m=n;
		n=j;
	}
	armstrong(m,n);
}

void armstrong(int a,int b)
{
	int i,j,sum=0;
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
	return;
}	
				
			
		
			