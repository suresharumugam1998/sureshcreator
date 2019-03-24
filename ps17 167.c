#include <stdio.h>
#include<conio.h>
void main()
{
	char str[30];
	int i,len,flag=0;
	scanf("%[^\n]s",str);
	len=strlen(str);
	for(i=2;i<=len/2;i++)
	{
		if(len%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("yes");
		
	}
	else
	{
		printf("no");
	}
	
}
