#include <stdio.h>
#include <strings.h>
#define n 4
void  main ()
{	int i,j;
	struct student
	{
		char name[30];
		int rollno;

	};
	struct student class[4];
	for(i=0;i<n;i++){
		scanf("%s",class[i].name );
		scanf("%d",&class[i].name);
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%s\n",class[i].name);
		printf("%d",class[i].rollno);
		printf("\n\n");
	}
}


