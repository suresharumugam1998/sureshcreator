#include <stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];
	int i,flag=1;
	scanf("%s %s",str1,str2);
	for(i=0;str2[i]!='\0';i++)
	{
		if(str2[i]=='b'||str2[i]=='a'||str2[i]=='n'||str2[i]=='a'||str2[i]=='n'||str2[i]=='a')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==0)
	{
		printf("no");
	}
	else
	{
		printf("yes");
	}
	
}
