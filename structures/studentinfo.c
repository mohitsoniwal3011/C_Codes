#include <stdio.h>
int main ()
{
	struct student   {
		char name[30];
		int rollno ;
		char branch[30];
	} stud1,stud2,stud3;
	
	printf("enter the name of student \n");
	gets(stud1.name);
	
	printf("enter the branch");
	gets(stud1.branch);
	
	printf("enter the roll no \n");
	scanf("%d",&stud1.rollno);
	
	 /*printf("%s\n", stud1.name);
	printf("%d\n", stud1.rollno);
	printf("%s", stud1.branch);
	return 0;   */
	
}
	