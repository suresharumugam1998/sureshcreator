#include <stdio.h>
#include<conio.h>

void main() 
{
	char str[20],c;
	int i;
	scanf("%s %c",str,&c);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]==c)
		{
			printf("%d",i+1);
			break;
		}
	}
	
}
