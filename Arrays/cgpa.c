#include <stdio.h>
int  main ()
{
	int   cred[5], gpsub[5],nsub,i=0,total=0;
	//cred=credits ,gpsub=grade points in subject,nsub=number of subjects.
	float gpa ;
	nsub=9;
	printf("enter the subject gp and credits in each subject respectively");
	for(i=0;i<nsub;i++) {
		scanf("%d%d",&gpsub[i],&cred[i]);
		total= total +gpsub[i]*cred[i];
	
	}
printf(" total is %d ", total);	
	gpa=total/22.0 ;
	printf("the total grade point averege is %f",gpa);
	return 0;
}	