#include <stdio.h>
#include<conio.h>
void main()
 
{
	char str[20],c;
	int i,count=0;
	scanf("%s %c",str,&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			count=count+1;
			
		}
	}
	printf("%d",count);
	
}
