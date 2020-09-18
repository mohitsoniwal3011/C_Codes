#include <stdio.h>
#include <string.h>
typedef struct  {
		char name[30];
		int rollno;
		char dept[30];
	} data;
int compere_structure(data a,data b);
int main ()
{	
	int y;
	
	data a,b;
	printf("enter data of structure 1:\n");
	fgets(a.name,30,stdin);
	scanf("%d",&a.rollno);
	getchar(); /* this is to store the '\n' entered after the scanf */
	fgets(a.dept,30,stdin);
	printf("enter data of structure 2:\n");
	fgets(b.name,30,stdin);
	scanf("%d",&b.rollno);
	getchar(); 
	fgets(b.dept,30,stdin);
	y=compere_structure(a,b);
	if (y==1){
		printf("the the structure varible are identical ");
	}
	if (y==0){
		printf("the the structure varible are not identical ");
	}
	return 0;
}
int compere_structure(data a, data b)
{
	if(strcmp(a.name,b.name)== 1){
		return 0;
	}
	if (a.rollno != b.rollno){
		return 0;
	}
	if(strcmp(a.dept,b.dept)==1 ){
		return 0;
	}
	return 1;
}	