#include <stdio.h>
#include<conio.h>
void main() 
{
	char str[50];
	int i,n;
	scanf("%s",str);
	n=strlen(str);
	for(i=0;i<n;i++)
	{
		str[i]=str[i]+3;
		if(str[i]=='X')
		str[i]='A';
		if(str[i]=='Y')
		str[i]='B';
		if(str[i]=='Z')
		str[i]='C';
	}
	printf("%s",str);
	}
