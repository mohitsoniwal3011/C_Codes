#include <stdio.h>
#include<math.h>
int main ()
{
	struct distance{
		int feet;
		int inch;
	}a,b,c;
	int distance1,distance2,distance,k;
	printf("enter the first distance\n");
	scanf("%d%d",&a.feet,&a.inch);
	distance1=a.feet*12 +a.inch;
	printf("enter the second distance\n");
	scanf("%d%d",&b.feet,&b.inch);
	distance2=b.feet*12 +b.inch;
	distance=distance1+distance2 ;
	c.feet=distance/12;
	c.inch=distance%12;
	printf("\n the total distance is %d feet %d inch",c.feet,c.inch);
	return 0;
	
}
	
	
	