#include <stdio.h>
int main ()
{
	int  a,i=0,j=0,rs=0,rss,cs=0,m,n; 
	//i=rowindex,j=col index,rs=rowsum,rss=rowsumsq,cs=column sum  
	scanf("%d%d",&m,&n);
	while(j<m){
		i=0;  rs=0;
		while(i<n) { 
			scanf("%d",&a);
			rs=rs+a;
			i++;   
		}
		rss=rs*rs;
		cs=cs+rss;
		j++;
	} 
	printf("the desired output is %d",cs);
}