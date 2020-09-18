#include<stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
	struct timeperiod   {
		int  hour;
		int minute;
		int second;
	} a,b,c;
	int sec1,sec2,sec,k;
	printf("enter the first time period\n");
	scanf("%d%d%d",&a.hour,&a.minute,&a.second);
	sec1=a.hour*60*60 +a.minute*60 +a.second;
	printf("enter the second time period\n");
	scanf("%d%d%d",&b.hour,&b.minute,&b.second);
	sec2=b.hour*60*60 +b.minute*60 +b.second;
	sec=abs(sec1-sec2);
	c.hour=sec/(60*60);
	k=sec%(60*60);
	c.minute=k/60;
	c.second=(k%60);
	printf(" \n the difference of the time periods is %d hour %d minute %d second",c.hour,c.minute,c.second);
	return 0;
}
	
	
