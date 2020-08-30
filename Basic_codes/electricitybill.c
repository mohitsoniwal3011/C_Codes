/*in this program we are assuming the fares of the first 50 units is 0.5/unit
the fare for next 100 units is 0.75/unit, for next 100 units it is 1.2/unit 
amd for next all the units,  the fare is 1.5/units */
#include <stdio.h>
int  main ()
{
	float a,b,c;
	printf("write the total number of units consumed");
	scanf("%f",&a);
	if((a<50)){
		printf("the total electric bill is %f",0.50*a);
	} 
   	else if((a>50)&&(a<150)){
		printf("the total electricity bill is %f",25+0.75*(a-50) );
	}  
	else if((a>150)&&(a<250))    {
		printf("the total electricity bill is %f ",100+1.2*(a-150));
	}
	else if((a>250))    {
		printf("the total electricity bill is %f",220+1.5*(a-250));
	}
	return 0;
	
}