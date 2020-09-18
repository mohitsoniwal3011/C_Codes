#include <stdio.h>
#define n 5
int main ()
{	
	int i;
	struct sale{
				char name[30];
				int sale;
			} array[n];
	int totalsale=0;
	float avgsale;
	printf("enter the data \n");
	for(i=0;i<n;i++){
		fgets(array[i].name,30,stdin);
		scanf("%d",&array[i].sale);
		getchar();  /* this getchar is to store the extra '\n' enterded by 
		the user after the scanf if we do not write this then programme will not properly */
	}
	for(i=0;i<n;i++){
		totalsale=totalsale+array[i].sale;
	}
	printf("the total sale is %d \n ",totalsale);
	avgsale=(float)totalsale/(float)n ;
	printf("the average sale is %f",avgsale);
}
	