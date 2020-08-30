//we are assuming that input numbers will be accepted until -1 is encountered	
#include <stdio.h>
int main ()
{
	int p,c,len,maxlen;
	len=0;  maxlen=0;
	scanf("%d",&p);
	if(p!=-1){
		scanf("%d",&c);
		len=1;  maxlen=1;
	}  
	while(c!=-1){
		if(p<c){	
			len=len+1;
		} 
		else{
			if(maxlen<len)   {
				maxlen=len;
		}  
		len=1;
	}
	p=c;
	scanf("%d",&c);
	}
	if(maxlen<len){
		maxlen=len;
	}
	printf("the longest length is %d",maxlen); 
	return 0;	
}